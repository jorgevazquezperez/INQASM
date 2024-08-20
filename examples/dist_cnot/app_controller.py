from netqasm.sdk import EPRSocket, Qubit
from netqasm.sdk.external import NetQASMConnection, Socket
from netqasm.lang.parsing.text import parse_text_subroutine
from netsquid.qubits import qubitapi as qapi

from squidasm.sim.glob import get_running_backend

subroutine_1 = """# NETQASM 1.0
# APPID 0
array 10 @0
array 1 @1
store 0 @1[0]
array 20 @2
store 0 @2[0]
store 1 @2[1]
array 1 @3
create_epr(0,0) 1 2 0
wait_all @0[0:10]
set Q0 1
qalloc Q0
init Q0
set Q0 1
rot_y Q0 1 1
set Q0 1
set Q1 0
cnot Q0 Q1
set Q0 0
meas Q0 M0
qfree Q0
store M0 @3[0]
ret_arr @0
ret_arr @1
ret_arr @2
ret_arr @3
"""

subroutine_2 = """# NETQASM 1.0
# APPID 0
set Q0 1
z Q0
"""

def main(app_config=None, phi=0.0, theta=0.0):
    # socket for creating an EPR pair with target
    target_epr = EPRSocket("target")

    # socket for communicating classical messages with target
    class_socket = Socket("controller", "target", log_config=app_config.log_config)

    # connect to the back-end
    controller = NetQASMConnection(
        app_name=app_config.app_name,
        log_config=app_config.log_config,
        epr_sockets=[target_epr],
    )

    with controller:
        proto = parse_text_subroutine(subroutine_1)
        controller.commit_subroutine(proto)
        
        # let back-end execute the quantum operations above
        controller.flush()

    
        epr_meas = controller.shared_memory.get_array_part(3, 0)
        class_socket.send(str(epr_meas))
        
        target_meas = class_socket.recv()
        if target_meas == "1":
            proto = parse_text_subroutine(subroutine_2)
            controller.commit_subroutine(proto)
        controller.flush()

        class_socket.send("ACK")

        dm = get_qubit_state(1, controller, False)
        print(dm)

        return {
            "epr_meas": int(epr_meas),
            "final_state": dm if dm is None else dm.tolist()
        }

def get_qubit_state(qubit_id, conexion: NetQASMConnection, reduced_dm=True):
    # Get the executor and qmemory from the backend
    backend = get_running_backend()
    if backend is None:
        raise RuntimeError("Backend is None")
    ns_qubits = []

    node_name = conexion.node_name
    assert node_name in backend.nodes, f"Unknown node {node_name}"
    executor = backend.executors[node_name]
    qmemory = backend.qmemories[node_name]

    # Get the physical position of the qubit
    virtual_address = qubit_id
    app_id = conexion.app_id
    phys_pos = executor._get_position(address=virtual_address, app_id=app_id)

    # Get the netsquid qubit
    ns_qubit = qmemory.mem_positions[phys_pos].get_qubit()
    ns_qubits.append(ns_qubit)

    if reduced_dm:
        dm = qapi.reduced_dm(ns_qubits)
    else:
        dm = ns_qubits[0].qstate.qrepr.reduced_dm()
    return dm
from netqasm.sdk import EPRSocket, Qubit
from netqasm.sdk.external import NetQASMConnection, Socket
from netqasm.lang.parsing.text import parse_text_subroutine
from netsquid.qubits import qubitapi as qapi

from squidasm.sim.glob import get_running_backend
import os

import yaml

def main(app_config=None, phi=0.0, theta=0.0):

    folder_path = './custom/Node0'
    file_list = sorted(os.listdir(folder_path), key=lambda x: os.path.splitext(x)[0])

    yaml_files = [file for file in file_list if file.endswith(".yaml")]
    nqasm_files = [file for file in file_list if file.endswith(".nqasm")]

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
        subroutine1 = open(folder_path + '/' + "file_0.nqasm", 'r').read()
        proto = parse_text_subroutine(subroutine1)
        controller.commit_subroutine(proto)
        # let back-end execute the quantum operations above
        controller.flush()

    
        epr_meas = controller.shared_memory.get_array_part(3, 0)
        class_socket.send(str(epr_meas))
        
        target_meas = class_socket.recv()
        print("Medida de trget:", target_meas)
        if target_meas == "1":
            subroutine1A = open(folder_path + '/' + "file_1A.nqasm", 'r').read()
            proto1A = parse_text_subroutine(subroutine1A)
            controller.commit_subroutine(proto1A)
        controller.flush()

        
        class_socket.send("ACK")
        print("ACK correcto")
        dm = get_qubit_state(0, controller, False)
        print(dm)

        return {
            "epr_meas": int(epr_meas),
            "final_state": dm if dm is None else dm.tolist()
        }

    # with controller:

    #     print("Sorted .yaml files:", yaml_files)
    #     print("Sorted .nqasm files:", nqasm_files)
    #     print()

    #     target_meas = 1
    #     received_meas = False
    #     for nqasm_file, yaml_file in zip(nqasm_files, yaml_files):
            
    #         if received_meas or target_meas:
    #             subroutine = open(folder_path + '/' + nqasm_file, 'r').read()
    #             print(subroutine)
    #             parsed_sub = parse_text_subroutine(subroutine)
    #             controller.commit_subroutine(parsed_sub)
    #             controller.flush()
    #         else:
    #             break
    #         if yaml_file:
    #             data = yaml.safe_load(open(folder_path + '/' + yaml_file, 'r'))
    #             array = int(data["send"]["array"]["name"])
    #             position = int(data["send"]["array"]["position"])

    #             epr_meas = controller.shared_memory.get_array_part(array, position)
    #             class_socket.send(str(epr_meas))
    #             target_meas = class_socket.recv()

    #     class_socket.send("ACK")

    #     dm = get_qubit_state(0, controller, False)
    #     print(dm)

    #     return {
    #         #"epr_meas": int(epr_meas),
    #         "final_state": dm if dm is None else dm.tolist()
    #     }
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
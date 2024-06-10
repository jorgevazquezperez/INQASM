from netqasm.sdk import EPRSocket, Qubit
from netqasm.sdk.external import NetQASMConnection, Socket
from netqasm.sdk.toolbox import set_qubit_state
from netqasm.lang.parsing.text import parse_text_subroutine

subroutine_1 = """# NETQASM 1.0
# APPID 0
array 10 @0
array 1 @1
store 0 @1[0]
recv_epr(0,0) 1 0
wait_all @0[0:10]
set Q0 1
qalloc Q0
init Q0
ret_arr @0
ret_arr @1"""

subroutine_2_1 = """# NETQASM 1.0
# APPID 0
array 1 @2
set Q0 0
x Q0
set Q0 0
set Q1 1
cnot Q0 Q1
set Q0 0
h Q0
set Q0 0
meas Q0 M0
qfree Q0
store M0 @2[0]
ret_arr @2"""

subroutine_2_2 = """# NETQASM 1.0
# APPID 0
array 1 @2
set Q0 0
set Q0 0
set Q1 1
cnot Q0 Q1
set Q0 0
h Q0
set Q0 0
meas Q0 M0
qfree Q0
store M0 @2[0]
ret_arr @2"""


def main(app_config=None, phi=0.0, theta=0.0):
    # socket for creating an EPR pair with Controller
    controller_epr = EPRSocket("controller")

    # socket for communicating classical messages with Controller
    class_socket = Socket("target", "controller", log_config=app_config.log_config)

    # connect to the back-end
    target = NetQASMConnection(
        app_name=app_config.app_name,
        log_config=app_config.log_config,
        epr_sockets=[controller_epr],
    )

    with target:
        proto1 = parse_text_subroutine(subroutine_1)
        target.commit_subroutine(proto1)

        # let back-end execute the quantum operations above
        target.flush()

        m = class_socket.recv()
        # if outcome = 1, apply an X gate on the local EPR half
        if m == "1":
            # if outcome = 1, apply an X gate on the local EPR half
            proto2 = parse_text_subroutine(subroutine_2_1)
            target.commit_subroutine(proto2)
        else:
            proto2 = parse_text_subroutine(subroutine_2_2)
            target.commit_subroutine(proto2)
        target.flush()

        epr_meas = target.shared_memory.get_array_part(2, 0)
        class_socket.send(str(epr_meas))

        # Wait for an ack before exiting
        assert class_socket.recv() == "ACK"

    return {"epr_meas": int(epr_meas)}

from netqasm.sdk import EPRSocket, Qubit
from netqasm.sdk.external import NetQASMConnection, Socket
from netqasm.sdk.toolbox import set_qubit_state
from netqasm.lang.parsing.text import parse_text_subroutine

import os

import yaml


def main(app_config=None, phi=0.0, theta=0.0):

    folder_path = '/home/jorgevazquez/Documents/CUQUI/build'
    file_list = sorted(os.listdir(folder_path), key=lambda x: os.path.splitext(x)[0])

    yaml_files = [file for file in file_list if file.endswith(".yaml")]
    nqasm_files = [file for file in file_list if file.endswith(".nqasm")]

    # socket for creating an EPR pair with target
    controller_epr = EPRSocket("controller")

    # socket for communicating classical messages with target
    class_socket = Socket("target", "controller", log_config=app_config.log_config)

    # connect to the back-end
    target = NetQASMConnection(
        app_name=app_config.app_name,
        log_config=app_config.log_config,
        epr_sockets=[controller_epr],
    )

    received_meas = False
    control_meas = 0
    with target:
        for i, (nqasm_file, yaml_file) in enumerate(zip(nqasm_files, yaml_files)):
            if not received_meas or control_meas == 1:
                subroutine = open(folder_path + '/' + nqasm_file, 'r').read()
                parsed_sub = parse_text_subroutine(subroutine)
                target.commit_subroutine(parsed_sub)

            if yaml_file:
                if received_meas:
                    data = yaml.safe_load(open(folder_path + '/' + yaml_file, 'r'))
                    array = int(data["send"]["array"]["name"])
                    position = int(data["send"]["array"]["position"])
                    epr_meas = target.shared_memory.get_array_part(array, position)
                    class_socket.send(str(epr_meas))
                else:
                    control_meas = class_socket.recv()
                    received_meas = True

        # Wait for an ack before exiting
        assert class_socket.recv() == "ACK"

    return {"epr_meas": int(epr_meas)}

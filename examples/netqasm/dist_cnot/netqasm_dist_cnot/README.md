# InQuIR part

**\#TODO**: Add the InQuIR part in the example.

# NetQASM part
Now we explain how is the NetQASM part working.

Performs a CNOT operation distributed over two nodes: Alice and Bob. There is an analogous example in the [NetQASM repository](https://github.com/QuTech-Delft/netqasm) in the folder `netqasm/examples/apps/dist_cnot`. 

The difference is that here we are working with **subroutines** in the assembly language defined by NetQASM and in the example given by them they use the python tools to build it. 

## Inputs
The inputs are the `controller.yaml` and `target.yaml`.

1. Controller: specification of the control qubit
* `app_controller`:
  * `phi` (float)
  * `theta` (float)

1. Target: specification of the target qubit
* `app_target`: 
  * `phi` (float)
  * `theta` (float)

## Output
The output is printed in the terminal with the joint state of the control and target qubits in density matrix form.

\#TODO Represent the output as they do in NetQASM (or even a more user-friendly way)
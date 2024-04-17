#ifndef IMPLS_IBM_OQASMCOMPILER_HPP
#define IMPLS_IBM_OQASMCOMPILER_HPP

#include <string>

class NetQASMCompiler {
public:
  NetQASMCompiler();

  const std::string
    translate(std::shared_ptr<CompositeInstruction> function) override;

  const std::string name() const override { return "NetQASM"; }

  virtual ~OQASMCompiler() {}
};

#endif
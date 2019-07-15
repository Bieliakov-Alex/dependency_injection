#ifndef DEPENDENCY_INJECTION_INCLUDE_V8ENGINE_HPP_
#define DEPENDENCY_INJECTION_INCLUDE_V8ENGINE_HPP_

#include "i_engine.hpp"

class V8Engine final : public IEngine {
public:
  void Start() override;
  void Stop() override;
};

#endif // DEPENDENCY_INJECTION_INCLUDE_V8ENGINE_HPP_

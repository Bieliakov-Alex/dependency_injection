#ifndef DEPENDENCY_IJECTION_INCLUDE_I_ENGINE_HPP_
#define DEPENDENCY_IJECTION_INCLUDE_I_ENGINE_HPP_

#include <memory>

class IEngine {
public:
  virtual void Start() = 0;
  virtual void Stop() = 0;
  virtual ~IEngine() = default;
};

std::unique_ptr<IEngine> MakeV8Engine();

#endif // DEPENDENCY_IJECTION_INCLUDE_I_ENGINE_HPP_

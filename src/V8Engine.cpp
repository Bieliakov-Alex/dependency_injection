#include "V8Engine.hpp"

V8Engine::start() {
  // start the engine
}

V8Engine::Stop() {
  // stop the engine
}

std::unique_ptr<IEngine> MakeV8Engine() { return std::make_unique<V8Engine>(); }

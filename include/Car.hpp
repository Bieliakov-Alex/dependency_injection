#ifndef DEPENDENCY_INJECTION_INCLUDE_CAR_HPP
#define DEPENDENCY_INJECTION_INCLUDE_CAR_HPP

#include "i_engine.hpp"

class Car {
public:
  Car(std::unique_ptr<IEngine> &&engine);

  void Drive();

private:
  std::unique_ptr<IEngine> m_engine_;
};

#endif // DEPENDENCY_INJECTION_INCLUDE_CAR_HPP

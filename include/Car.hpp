#ifndef DEPENDENCY_INJECTION_INCLUDE_CAR_HPP
#define DEPENDENCY_INJECTION_INCLUDE_CAR_HPP

class Car {
public:
  void Drive();

private:
  V8Engine m_engine;
};

#endif // DEPENDENCY_INJECTION_INCLUDE_CAR_HPP

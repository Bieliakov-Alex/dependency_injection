#include "Car.hpp"

Car::Car(std::unique_ptr<IEngine> &&engine) : m_engine_(std::move(engine)) {}

void Car::Drive() {
  m_engine->Start();
  // drive
  m_engine->Stop();
}

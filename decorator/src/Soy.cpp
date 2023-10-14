#include "../include/Soy.h"

Soy::Soy(std::unique_ptr<Beverage> a_beverage) 
  : CondimentDecorator(std::move(a_beverage)) {}

std::string Soy::getDescription() const {
  return m_beverage->getDescription() + ", Soy";
}

double Soy::getCost() const {
  return m_beverage->getCost() + 0.15;
}

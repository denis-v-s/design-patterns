#include "../include/Whip.h"

Whip::Whip(std::unique_ptr<Beverage> a_beverage) 
  : CondimentDecorator(std::move(a_beverage)) {}

std::string Whip::getDescription() const {
  return m_beverage->getDescription() + ", Whip";
}

double Whip::getCost() const {
  return m_beverage->getCost() + 0.10;
}

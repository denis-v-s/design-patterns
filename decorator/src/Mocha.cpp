#include "../include/Mocha.h"

Mocha::Mocha(std::unique_ptr<Beverage> a_beverage) 
  : CondimentDecorator(std::move(a_beverage)) {}

std::string Mocha::getDescription() const {
  return m_beverage->getDescription() + ", Mocha";
}

double Mocha::getCost() const {
  return m_beverage->getCost() + 0.20;
}
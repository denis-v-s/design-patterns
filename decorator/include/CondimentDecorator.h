#pragma once
#include <memory>
#include "Beverage.h"

class CondimentDecorator : public Beverage {
protected:
  std::unique_ptr<Beverage> m_beverage;
  
public:
  CondimentDecorator(std::unique_ptr<Beverage> a_beverage) 
    : m_beverage(std::move(a_beverage)) {}
};

#pragma once
#include "CondimentDecorator.h"

class Mocha : public CondimentDecorator {
public:
  Mocha(std::unique_ptr<Beverage> a_beverage);
  std::string getDescription() const override;
  double getCost() const override;
};

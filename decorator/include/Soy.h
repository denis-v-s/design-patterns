#pragma once
#include "CondimentDecorator.h"

class Soy : public CondimentDecorator {
public:
  Soy(std::unique_ptr<Beverage> a_beverage);
  std::string getDescription() const override;
  double getCost() const override;
};

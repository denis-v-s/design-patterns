#pragma once
#include "CondimentDecorator.h"

class Whip : public CondimentDecorator {
public:
  Whip(std::unique_ptr<Beverage> a_beverage);
  std::string getDescription() const override;
  double getCost() const override;
};

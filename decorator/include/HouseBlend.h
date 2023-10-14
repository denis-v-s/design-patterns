#pragma once
#include "Beverage.h"

class HouseBlend : public Beverage {
public:
  std::string getDescription() const override;
  double getCost() const override;
};

#include "Beverage.h"

class Espresso : public Beverage {
public:
  std::string getDescription() const override;
  double getCost() const override;
};

#include <iostream>
#include "../include/Espresso.h"
#include "../include/HouseBlend.h"
#include "../include/Mocha.h"
#include "../include/Soy.h"
#include "../include/Whip.h"

int main() {
  std::unique_ptr<Beverage> espresso = std::make_unique<Espresso>();
  std::cout << espresso->getDescription() << " $" << espresso->getCost() << "\n";
  
  std::unique_ptr<Beverage> houseBlend = std::make_unique<HouseBlend>();
  houseBlend = std::make_unique<Soy>(std::move(houseBlend));
  houseBlend = std::make_unique<Whip>(std::move(houseBlend));
  houseBlend = std::make_unique<Mocha>(std::move(houseBlend));
  
  std::cout << houseBlend->getDescription() << " $" << houseBlend->getCost() << "\n"; 
  return 0;
}

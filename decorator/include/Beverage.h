#pragma once
#include <iostream>
#include <string>

class Beverage {
protected:
  std::string m_description;

public:
  virtual ~Beverage() = default;
  virtual std::string getDescription() const = 0;
  virtual double getCost() const = 0;
};

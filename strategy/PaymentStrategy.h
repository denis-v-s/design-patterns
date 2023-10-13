#pragma once

class PaymentStrategy {
public:
  virtual void pay(const double a_amount) = 0;
};

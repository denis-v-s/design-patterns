#pragma once
#include <iostream>
#include <memory>
#include "PaymentStrategy.h"

class ShoppingCart {
private:  
  std::unique_ptr<PaymentStrategy> m_paymentStrategy;

public:
  void setPaymentStrategy(const std::unique_ptr<PaymentStrategy> a_paymentStrategy);
  void checkout(const double a_amount);
};

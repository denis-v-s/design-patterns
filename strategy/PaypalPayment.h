#pragma once
#include <iostream>
#include <string>
#include "PaymentStrategy.h"

class PaypalPayment : public PaymentStrategy {
private:
  std::string m_email;  
  
public:
  PaypalPayment(const std::string& a_email);
  void pay(const double a_amount) override; 
};

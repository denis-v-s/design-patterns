#pragma once
#include <iostream>
#include <string>
#include "PaymentStrategy.h"

class CreditCardPayment : public PaymentStrategy {
private:
  std::string m_cardNumber;
  std::string m_name;

public:
  CreditCardPayment(const std::string& a_cardNumber, const std::string& a_name);
  void pay(const double a_amount) override; 
};

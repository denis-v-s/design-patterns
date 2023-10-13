#include "CreditCardPayment.h"

CreditCardPayment::CreditCardPayment(const std::string& a_cardNumber, const std::string& a_name)
  : m_cardNumber(a_cardNumber), m_name(a_name) {}

void CreditCardPayment::pay(const double a_amount) {
  std::cout << m_name << " paid $" << a_amount << " with credit card " << m_cardNumber << "\n";
}

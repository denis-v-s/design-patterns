#include "PaypalPayment.h"

PaypalPayment::PaypalPayment(const std::string& a_email) : m_email(a_email) {}

void PaypalPayment::pay(const double a_amount) {
  std::cout << "Paid $" << a_amount << " with PayPal (email: " << m_email << ")\n";
}
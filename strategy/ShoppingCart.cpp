#include "ShoppingCart.h"

void ShoppingCart::setPaymentStrategy(std::unique_ptr<PaymentStrategy> a_paymentStrategy) {
  m_paymentStrategy = std::move(a_paymentStrategy);
}

void ShoppingCart::checkout(const double a_amount) {
  if (m_paymentStrategy) {
    m_paymentStrategy->pay(a_amount);
  }
  else {
    std::cout << "you must set a payment method to proceed\n";
  }
}

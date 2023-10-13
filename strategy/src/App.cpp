#include "../include/PaymentStrategy.h"
#include "../include/CreditCardPayment.h"
#include "../include/PaypalPayment.h"
#include "../include/ShoppingCart.h"

int main() {
  ShoppingCart shoppingCart;
  
  shoppingCart.setPaymentStrategy(std::make_unique<CreditCardPayment>("1234-5678-9012-3456", "John"));
  shoppingCart.checkout(76.99);
  
  shoppingCart.setPaymentStrategy(std::make_unique<PaypalPayment>("john@gmail.com"));
  shoppingCart.checkout(15.01);

  return 0;
}

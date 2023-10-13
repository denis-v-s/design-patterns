#include "PaymentStrategy.h"
#include "CreditCardPayment.h"
#include "PaypalPayment.h"
#include "ShoppingCart.h"

int main() {
  std::unique_ptr<CreditCardPayment> ccPayment = std::make_unique<CreditCardPayment>("1234-5678-9012-3456", "John");
  std::unique_ptr<PaypalPayment> ppPayment = std::make_unique<PaypalPayment>("john@gmail.com");

  ShoppingCart shoppingCart;
  
  shoppingCart.setPaymentStrategy(std::move(ccPayment));
  shoppingCart.checkout(76.99);
  
  shoppingCart.setPaymentStrategy(std::move(ppPayment));
  shoppingCart.checkout(15.01);

  return 0;
}

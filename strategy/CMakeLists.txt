project(strategy)
set(CMAKE_CXX_STANDARD 17)

set(HEADERS
  CreditCardPayment.h
  PaymentStrategy.h
  PaypalPayment.h
  ShoppingCart.h
)

set(SRC
  CreditCardPayment.cpp
  PaypalPayment.cpp
  ShoppingCart.cpp
)

add_library(${PROJECT_NAME}-lib STATIC ${SRC})
add_executable(${PROJECT_NAME} App.cpp)
target_link_libraries(${PROJECT_NAME} ${PROJECT_NAME}-lib)

target_compile_options(${PROJECT_NAME} PRIVATE
  -Wall
  -Wextra
  -Werror
  -Wconversion
  -Wpedantic
)

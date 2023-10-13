#include <iostream>
#include <string>

class Singleton {
private:
  Singleton() {}
  Singleton(const Singleton&) = delete;
  void operator=(const Singleton&) = delete;
  std::string m_message;

public:

  static Singleton& getInstance() {
    static Singleton s_instance; // guarantees a single instance (multithreading safety)
    return s_instance;
  }

  void setMessage(const std::string& a_message) {
    m_message = a_message;
  }
  
  std::string getMessage() {
    return m_message;
  }
  
  bool operator==(const Singleton& a_other) {
    return this == &a_other;
  }
};

int main() {
  Singleton& s1 = Singleton::getInstance();
  s1.setMessage("Hello, Singleton");
  std::cout << s1.getMessage() << std::endl;

  Singleton& s2 = Singleton::getInstance();
  std::cout << s2.getMessage() << std::endl;
  
  std::cout << (s1 == s2) << std::endl;
  return 0;
}

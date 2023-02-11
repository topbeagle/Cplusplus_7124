#include <iostream>
#include <cstdint>

int main() {
  std::cout << (5 >> 2) << std::endl;
  std::cout << (-5 >> 2) << std::endl;
  std::cout << (0xffffffffL >> 30) << std::endl;
  std::cout << (2 & 5) << std::endl;
  std::cout << (2 > 5 ? "bt" : "lt") << std::endl;
  return 0;
}

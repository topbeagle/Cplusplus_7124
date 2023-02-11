#include <iostream>

int main() {
  int s = 0;
  int i = 7;
  for (;;) {
    s += i;
    if (i <= 5) break;
    i--;
  }
  std::cout << "s=" << s << std::endl;
  return 0;
}

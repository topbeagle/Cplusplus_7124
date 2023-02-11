#include <iostream>

int main() {
  outer:
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      if (i == j) continue;
      	std::cout << "i=" << i << "\t" << "j=" << j << std::endl;
    }
  }
  return 0;
}

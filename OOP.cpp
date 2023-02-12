#include <iostream>

class Point {
public:
  int x, y;

  Point(int x, int y) : x(x), y(y) {}

  void print() {
    std::cout << "(" << x << ", " << y << ")" << std::endl;
  }
};

int main() {
  Point p(1, 2);
  p.print();

  return 0;
}


#include <iostream>

class Point {
 public:
  int x, y;
};

void f(Point& p, int a[2]) {
  p.x = 3; p.y = 4;
  a[0] = 3; a[1] = 4;
}

int main() {
  Point p;
  int a[2] = {1, 2};
  p.x = 1; p.y = 2;
  f(p, a);
  std::cout << "p.x=" << p.x << std::endl;
  std::cout << "p.y=" << p.y << std::endl;
  std::cout << "a[0]=" << a[0] << std::endl;
  std::cout << "a[1]=" << a[1] << std::endl;
  return 0;
}

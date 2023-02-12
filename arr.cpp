#include <iostream>

class ArrayProcessor {
private:
  int *arr;
  int size;

public:
  ArrayProcessor(int arr[], int size) : arr(arr), size(size) {}

  void printArray() {
    for (int i = 0; i < size; i++) {
      std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
  }

  int sumArray() {
    int sum = 0;
    for (int i = 0; i < size; i++) {
      sum += arr[i];
    }
    return sum;
  }
};

int main() {
  int numbers[5] = {1, 2, 3, 4, 5};
  ArrayProcessor ap(numbers, 5);

  ap.printArray();
  std::cout << "Sum: " << ap.sumArray() << std::endl;

  return 0;
}


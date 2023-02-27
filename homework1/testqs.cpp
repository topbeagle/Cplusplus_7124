#include <iostream>
#include <vector>

class QuickSort {
public:
  void sort(std::vector<int>& arr) {
    quickSort(arr, 0, arr.size() - 1);
  }

private:
  void quickSort(std::vector<int>& arr, int left, int right) {
    if (left < right) {
      int pivotIndex = partition(arr, left, right);
      quickSort(arr, left, pivotIndex - 1);
      quickSort(arr, pivotIndex + 1, right);
    }
  }

  int partition(std::vector<int>& arr, int left, int right) {
    int pivot = arr[right];
    int i = left - 1;
    for (int j = left; j < right; j++) {
      if (arr[j] < pivot) {
        i++;
        std::swap(arr[i], arr[j]);
      }
    }
    std::swap(arr[i + 1], arr[right]);
    return i + 1;
  }
};

int main() {
  std::vector<int> arr = {5, 2, 8, 1, 9, 4};
  QuickSort qs;
  qs.sort(arr);
  for (auto num : arr) {
    std::cout << num << " ";
  }
  std::cout << std::endl;
  return 0;
}


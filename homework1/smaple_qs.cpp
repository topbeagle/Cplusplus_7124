#include <iostream>
#include <vector>

using namespace std;

class QuickSort {
public:
    void sort(vector<int>& nums) {
        if (nums.empty()) return;
        quickSort(nums, 0, nums.size() - 1);
    }

private:
    void quickSort(vector<int>& nums, int left, int right) {
        if (left >= right) return;

        int pivot = nums[(left + right) / 2];
        int i = left, j = right;

        while (i <= j) {
            while (nums[i] < pivot) i++;
            while (nums[j] > pivot) j--;
            if (i <= j) {
                swap(nums[i], nums[j]);
                i++;
                j--;
            }
        }

        quickSort(nums, left, j);
        quickSort(nums, i, right);
    }
};

class App {
public:
    void run() {
        vector<int> nums = {5, 2, 9, 1, 5, 6};
        QuickSort qs;
        qs.sort(nums);

        for (int num : nums) {
            cout << num << " ";
        }
        cout << endl;
    }
};

int main() {
    App app;
    app.run();

    return 0;
}


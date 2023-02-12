/*
 * sumEven.cpp
 * author:Michael Castaneda
 * class:CISC 7124
 * Return the sums of even integers in array a
 */
#include <iostream>

using namespace std;

class sumEven {
	private:
		int *arr;
 		int size;
	public:

		sumEven(int arr[],int size) :arr(arr), size(size) {}

		int sumEven_calc() {
		int eSum;

			for (int i = 0; i < size; i++)
				if (arr[i] % 2 == 0)
					eSum += arr[i];

			return eSum;
		
		};


void print() {
	std::cout <<" There are the sums of the first "<< size <<" even fibonacci numbers : " << sumEven_calc() << std::endl;
};	

};

int main() {
	int fibonacci[13] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144};
        sumEven p(fibonacci,13);
	p.print();

	return 0;
}

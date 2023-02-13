/*
 * sorted.cpp
 * author:Michael Castaneda
 * class:CISC 7124
 * Test if array a is sorted in ascending order. 
 */
#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

class random {
	private:
		int arr_size = 10;
		int limit = 100;

	public:	

		int*  random_calc() {
			
			srand(time(0));

			int* arr = new int[arr_size];

			for(int i=0; i <arr_size;i++)
				arr[i] = rand() % limit+1;

			std::cout << "New array created  " << arr << std::endl; 

			return arr;
		}
};


class ascTest {
	public:
		random Ra;

		int* unsort_arr;
		int* sorted_arr;
 
		bool ascTest_calc() {
			int size;
			int* copy_arr;

			int* unsort_arr = Ra.random_calc();

			size = sizeof(unsort_arr);

			std::sort(unsort_arr);

			for(int i=0;i<size;i++)
				copy_arr[i] = unsort_arr[i];


			/* test if each element array matches */ 
			for(int n=0;n<size;n++)
			       for(int j=0;j<size;j++)
			      	   if ( copy_arr[n] != unsort_arr[j])
				    	return false;

			return true;
		}
};

int main() {

	ascTest A;
	A.ascTest_calc();

	return 0;
}


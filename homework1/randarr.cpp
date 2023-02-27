#include <iostream>
/* is a preprocessor directive in C++ that tells the compiler to include the contents of the iostream header file in the current source file. The iostream header file provides functionality for input and output operations in C++, including reading input from the keyboard and displaying output to the screen.
*/
#include <ctime>
#include <cstdlib>
#include <vector>

using namespace std;
/* is a hack that save you from writing 'std::something */

class sorts {
	public:
		void sortthis(vector<int>& arr) {
			cout << "Calling second class" << endl;
			cout << "Calling Quick sort algorithm" << endl;
			cout << "array size " << arr.size() << endl;
/* this quick sort class takes a reference to a vector of integers  */
			quickSort(arr, 0, arr.size() -1);
		}
	
	private:
		void quickSort(vector<int>& arr, int left, int right) {
			cout << "This is Quick Sort" << endl;
			cout << "left " << left << endl;
			cout << "right " << right << endl;
			if (left < right ) {
				int pivotIndex = partition(arr, left ,right);
				cout << "pivotIndex " << pivotIndex << endl;
				cout << "left " << left << endl;
				cout << "right " << right << endl;
				quickSort(arr, left, pivotIndex -1);
				quickSort(arr, pivotIndex + 1, right);
			}	
		}

		int partition(vector<int>& arr, int left, int right) {
			cout << "Inside the partition function" << endl;
			int pivot = arr[right];
			cout << "pivot " << pivot << endl;
			int i = left - 1;
			cout << "this is i " << i << endl;
			for(int j = left; j < right; j++ ) {
				if (arr[j] < pivot) {
					i++;
					swap(arr[i],arr[j]);
					cout << "arr[i] " << arr[i] << endl;
					cout << "arr[j] " << arr[j] << endl;
				}
			}

			swap(arr[i + 1],arr[right]);
			return i + 1;
		}

};

class myrand {
	public:

		myrand(int arr[],int size) {
		/* a constructor is a special member function of a class that is used to initialize its objects. Constructors have the same name as the class, and they are called automatically when an object of the class is created. */
			for(int i = 0; i < size; i++)
				arr[i] = {0};
		}

		int* randcalc(int arr[],int size) {
			srand(time(0));
		
			for(int i = 0;i<size;i++) {
				int randomNumber = rand() % 100 +1;
				arr[i] = randomNumber;
			}	

			return arr;
		}

		void printstuff(int arr[],int size) {
			for(int i = 0; i<size; i++) {
			       cout << arr[i] << " ";
		       	}
	 		cout << endl;
		}
		
		void bestsort(vector<int>& arr) {
			sorts S;
			S.sortthis(arr);
		}

};



int main() {

	const int arrsize = 10;
	int arr[arrsize] = {0};
	int* randarr;

	myrand R(arr,arrsize);

	randarr = R.randcalc(arr,arrsize);

	R.printstuff(randarr,arrsize);

	/* convert an int arr to a vectort */
	int n =  sizeof(randarr) / sizeof(randarr[0]);
	vector<int> varr(randarr,randarr + n);

	R.bestsort(varr);


	return 0;
}

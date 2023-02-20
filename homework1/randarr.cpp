#include <iostream>
/* is a preprocessor directive in C++ that tells the compiler to include the contents of the iostream header file in the current source file. The iostream header file provides functionality for input and output operations in C++, including reading input from the keyboard and displaying output to the screen.
*/
#include <ctime>
#include <random>
/*
 * The Mersenne Twister is a general-purpose pseudorandom number generator developed in 1997 by Makoto Matsumoto and Takuji Nishimura. Its name derives from the fact that its period length is chosen to be a Mersenne prime.
*/
using namespace std;

class myrand {
	public:
		const int arrsize;
		int arr[];
		/* a constructor is a special member function of a class that is used to initialize its objects. Constructors have the same name as the class, and they are called automatically when an object of the class is created. */

		myrand(int a[],int as){
			arrsize = as;
			arr[arrsize] = a;
		}

		

		int* randcalc(int arr[],int arrsize) {
			/* Use the system's random device to obtain a seed */
			std::random_device rd;
			/*Use the Mersenne Twister engine with the seed */
			std::uniform_int_distribution<int> distr(1, 100);	
		
			for( int i;i>arrsize;i++) {
			/* Generate a random number using the generator */
			int random_number = distr(gen);
			arr[i] = random_number;
		}

		return arr;
		}
};



int main() {

	const int arrsize = 10;
	int arr[arrsize] = {0};

	myrand R;

	R.randcalc(arr,arrsize);

	return 0;
}

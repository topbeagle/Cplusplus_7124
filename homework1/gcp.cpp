/* 
 * gcd.cpp
 * author:Michael Castaneda
 * class:CISC 7124
 * GCD definition:The Greatest Common Divisor of two positive integers (a,b) is the largest divisor common to both a and b.
 */

#include <iostream>
#include <algorithm>

using namespace std;

class Gcd {
	public:
		int x, y;

		Gcd(int x, int y) :x(x), y(y) {}
	
		int calc_gcd(int x,int y) {
			if( x == 0 || y ==0 )
				return 0;
			else if ( x ==y )
				return y;
			else if ( x > y)
				return __gcd(y-x,y);
			else
				return __gcd(x,y-x);
		};
	
		void print() {
			std::cout << "The greatest common divisor of "<< x << " and " << y << " is " <<calc_gcd(x,y) << std::endl;
		};
};

int main(){
	Gcd p(213,2354);
	p.print();

	return 0;
}

/*
	If we list all the natural numbers below 10 that are multiples of 3 or 5, 
	we get 3, 5, 6 and 9. The sum of these multiples is 23.

	Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <iostream>
#include <math.h> 

using namespace std;

//returns sum of all the multiples of a or b below n
class SumMult{
	public:
		SumMult(){};
		~SumMult(){};
		int sumOfMult(int, int, int);
		double log(int, int);
};

int SumMult::sumOfMult(int a, int b, int n){
	//generates number that can be converted to binary which represents possible combinations
	int num2a = int(ceil(log(a,n)));
	int num2b = int(ceil(log(b,n)));

	return num2a + num2b;
}

double SumMult::log(int base, int x){
	//return std::log(x)/std::log(base);
	return 0.1;
}

int main(){
	SumMult sm;
	int sum = sm.sumOfMult(3,5,1000);
	cout << sum << endl;
	return 0;
}
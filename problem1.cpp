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
		int sumOfMult(int, int, int);
};

int SumMult::sumOfMult(int a, int b, int n){
	//generates number that can be converted to binary which represents possible combinations
	int sum = 0;
	for(int num = min(a,b); num < n ; num++){
		if(num % a == 0 || num % b == 0){
			sum += num;
		}
	}
	return sum;
}

int main(){
	SumMult sm;
	int sum = sm.sumOfMult(3,5,1000);
	//sum of 3,5,6,9,10, 12,15,18 = 78

	cout << sum << endl;
	return 0;
}
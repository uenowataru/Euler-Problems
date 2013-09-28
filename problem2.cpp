/*
Each new term in the Fibonacci sequence is generated by adding the previous two terms. 
By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, 
find the sum of the even-valued terms.
*/


#include <iostream>

using namespace std;

class Fibo{
	long *fibs;
	void genFibo(int);
public:
	Fibo();
	int sumEven(int);
	~Fibo();
};

Fibo::Fibo(){
}
Fibo::~Fibo(){
	delete [] fibs;
}

void Fibo::genFibo(int n){
	fibs = new long[n];
	fibs[0] = 1;
	fibs[1] = 1;
	int index = 2;
	while(fibs[index-1] < n){
		fibs[index] = fibs[index-1] + fibs[index - 2];
		index++;
	}
}

//number of even fibonacci numbers below n
int Fibo::sumEven(int n){
	int sum = 0;
	genFibo(n);
	for(int index = 1 ; fibs[index] < n; index++){
		if((fibs[index] & 1) == 0){
			sum += fibs[index];
		}
	}
	return sum;
 }

int main(){
	Fibo fb;
	cout << fb.sumEven(4000000) << endl;
	return 0;
}
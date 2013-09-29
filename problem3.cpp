/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/
#include <iostream>

using namespace std;

class Number{
  long number;
public:
  Number(long);
  long getPrimeFactor(long);
};

Number::Number(long number){
  this->number = number;
}

long Number::getPrimeFactor(long number){
  for(long num = 2; num <= number; num++){
    //cout<< *prime << " " << *prime%primes[index]<< " " << primes[index] << endl;
    if(number%num == 0){
      if(number/num == 1){
        return num;
      }else{
        return getPrimeFactor(number/num);
      }
    }
  }
}

int main(){
  Number number(9);
  
  cout << "Running.." << endl;
  cout << "Largest prime factor is: " << number.getPrimeFactor(600851475143) <<  endl << endl;
}

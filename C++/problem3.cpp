/************************************************************************
*                                                                       *
* PROJECT EULER - PROBLEM 3                                             *
*                                                                       *
* The prime factors of 13195 are 5,7,13 and 29.What was the largest     *
* prime factor of the number 600851475143?                              *
*                                                                       *
* EXPLANATION OF SOLUTION                                               *
* We created a function that checks whether a number is prime or not    *
* Then we try to find all the prime factors of the given number while   *
* checking whether each number we get is the largest so far.We reduce   *
* the number of iterations by taking some shortcuts such as omitting    *
* tests for even numbers and reducing the magnitude of the given number *
* by dividing the number by each of the prime factors that we get       *
*                                                                       *
*************************************************************************/

#include <iostream>

using namespace std;

// determine if a number is a prime number
bool isprime(long long n){
	if(n == 2){
		return true;
	}
	
	if (n > 3){
		if((n % 2) == 0){
			return false;
		}
	}
	
	for(long long j = 3;j * j <= n;j += 2){
		if ((n % j) == 0) 
		    return false;
	}
	
	return true;
}

int main()
{
	long long number = 600851475143;
	long long largest = 0;
	long long quotient = 0;
	
	for(long long j = 3;j * j <= number;j += 2){
		if((number % j)  == 0){
			quotient = number / j;
			if(isprime(j) && largest < j) { largest = j; number /= j;}
			if(isprime(quotient) && largest < quotient) { largest = quotient; number /= quotient; }
		}
	}
	
	cout << largest;
}

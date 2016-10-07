/*************************************************************************
 *  PROJECT EULER PROBLEM 4                                                   
 *                                                                            
 *  A palindromic number reads the same both ways.The largest palindrome made 
 *   from the product of two 2-digit numbers is 9009 = 91 x 99.Find the        
 *  largest palindrome made from the product of two 3-digit numbers.          
 *                                                                           
 *  SOLUTION                                                                  
 *  We write two loops to multiply 3 digit numbers with themselves and in each
 *  iteration,we check whether the result is a palindrome and whether it is   
 *  bigger than the largest palindrome gotten so far 
 *
 ***************************************************************************/

#include <iostream>

using namespace std;

bool isPalindrome(int number){
    int copy = number;
    int digit = 0;
    int revVal = 0;

    while(copy > 0){
    	digit = copy % 10;
        revVal = revVal * 10 + digit;
        copy /= 10;
	}
        

    if(revVal == number){
    	return true;
	}
        
    return false;
}

int main()
{
	int largest = 0;
	
	for(int i = 100;i < 1000;i++){
		for(int j = i;j < 1000;j++){
			if(isPalindrome(i * j)){
				if(i * j > largest){
					largest = i * j;
				}
			}
		}
	}
	
	cout << largest << endl;
}

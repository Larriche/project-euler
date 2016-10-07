#include <iostream>

using namespace std;

int main()
{
	long int i = 20;
	
	while(true){
		int divcount = 0;
		
		for(int j = 11;j <= 20;j++){
			if(i % j != 0){
				break;
			}
			else{
				divcount += 1;
			}
		}
		
		if(divcount == 10){
			cout << i;
			break;
		}
		else{
			i += 20;
		}
	}
}

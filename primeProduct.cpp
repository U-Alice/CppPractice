#include <iostream>
using namespace std;


int main(){
	int product = 1;
	int ndiv = 0;
	for(int i = 2; i < 100; i++){
		for(int j = 1; j <= i; j++){
			if(i % j ==0){
				ndiv++;
			}
		}
			if(ndiv == 2){
				product = product * i;
			}
		ndiv = 0;
	}
	cout << "The product of prime numbers between 1 and 100 is: " << product;
	
	return 0;
}

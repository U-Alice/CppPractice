#include <iostream>
using namespace std;


int findPrimeNumbers(int num){
	int counter;
	int position = 1;
	int i = 2;
	while( i < num){
		counter = 0;
		for(int j = 1; j <= num; j++){
			if(i % j == 0){
				counter++;
			}
		}
		if(counter == 2){
			position++;
		}
		i++;
	}
		return position;
}

int main(){
	cout << "The position is " <<  findPrimeNumbers(7);
	return 0;
}

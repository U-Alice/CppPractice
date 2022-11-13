#include <iostream>
using namespace std;



int countDigit(int number, int digit){
	int counter = 0;
	while(number > 0){
		int dig = number % 10;
		number /= 10;
		cout << dig << endl;
		if(dig == digit){
			counter++;
		}
	}
	return counter;
}
int main(){
	cout << "From the number " << 1214 << " " << 1 << " was counted " <<  countDigit(1214,1) << " times"; 
	return 0;
}

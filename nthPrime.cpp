#include <iostream>
using namespace std;


int main(){
	int num;
	int prime = 1, ndiv = 0;
	cout << "Enter a number : ";
	cin >> num;
	
	while(ndiv <= num){
		int i = 0;
		for(int j = 1; j <= i; j++){
			if(i % j ==0){
				prime = i;
				ndiv++;
			}
		}
		i++;
	}
	cout << "The prime number is " << prime;
	
	return 0;
}

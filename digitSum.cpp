#include <iostream>
using namespace std;
int isDigitSum(int num, int num1){
	int sum = 0;
	int sum1 = 0;
	while(num > 0){
		int digit = num % 10;
		num /= 10;
		sum += digit;
	}
	while(num1 > 0){
		int digit  = num1%10;
		num1 /= 10;
		sum1 += digit;
	}
	if(sum < sum1){
		return 01;
	}else{
		return 0;
	}
}


int main(){
	int number2 = 32121;
	int number1 = 10;
	cout <<  isDigitSum(number1, number2);
	return 0;
}

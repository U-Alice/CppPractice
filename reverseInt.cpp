#include <iostream>
using namespace std;

int main(){
	int num  = 4321;
	int reverse = 0;
	while (num > 0){
		int rem =  num % 10;
		reverse = reverse * 10+rem;
		num /= 10;
	}
	cout << "The reversed number is : " << reverse;
	return 0;
}

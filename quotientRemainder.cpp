#include <iostream>
using namespace std;


int main(){
	int num1, num2, quotient, remainder;
	cout << "Enter the two numbers: " << endl;
	cout << "num1 : ";
	cin >> num1;
	cout << "num2 : ";
	cin >> num2;
	
	quotient = num1 / num2;
	remainder = num1 % num2;
	
	cout << "Quotient is : " << quotient <<  " Remainder is: " << remainder;
}

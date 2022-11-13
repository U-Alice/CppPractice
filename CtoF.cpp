#include <iostream>
using namespace std;


int main(){
	float celsius;
	cout << "Enter the degree in celsius: ";
	cin >> celsius;
	
	float fahrenheit = (celsius * (9/5))+32;
	
	cout << "The temperature in fahrenheit is " << fahrenheit;
	
	return 0;
}

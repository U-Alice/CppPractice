#include <iostream>
#include <time.h>   
using namespace std;


int printSorted(int num1, int num2, int num3){
	if(num1 <  num2 && num2 < num3)
		cout << num1 << ","<< num2 << "," << num3;
	else if(num1 <  num2 && num3 < num2)
		cout << num1 << "," << num3 << "," << num2;
	else
		cout << num3 << ","<< num2 << "," << num1;
	return 0;
}

int main(){
	int num1, num2, num3;
	
	cout << "Enter three numbers : ";
	cout << "num1 : ";
	cin >> num1;
	
	cout << "num2 : ";
	cin >> num2;
	
	cout << "num3 : ";
	cin >> num3;
	
	printSorted(num1, num2, num3);
	return 0;
}

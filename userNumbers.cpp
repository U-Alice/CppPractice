#include <iostream>
using namespace std;
int main(){
	int n;
	int sum = 0;
	cout << "Enter the number of positive numbers needed : ";
	cin >> n;
	
	for(int i = 0;   i  < n; i++){
		int number;
		cout << "Enter the first number : ";
		cin  >> number;
		sum += number;
	}
	int average = sum /  n;
	cout  << "The sum is " << sum << "The average is " << average;
	return 0;
}

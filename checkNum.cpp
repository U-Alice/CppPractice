#include <iostream>
using namespace std;



string checkNum(int num){
	if(num > 0)
		return "Positive";
	else if(num < 0)
		return "Negative";
	else
		return "Zero";
}

int main(){
	int num;
	cout << "Enter a number: ";
	cin >> num;
	cout << checkNum(num);
	return 0;
}

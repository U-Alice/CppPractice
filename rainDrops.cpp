#include <iostream>
using namespace std;

int main(){
	int num, ndiv;
	cout << "Enter a number : ";
	cin >> num;
	string result = "";
	if(num % 3  == 0){
		result += "pling";
	}
	
	if(num % 5 == 0){
		result += "plang";
	}
	
	if(num % 7 == 0){
		result += "Plong";
	}
	if(!(num % 3  == 0) && !(num % 5 == 0) && !(num % 7 == 0)){
	    cout << "The result is " << num;
	    exit;
	}
	
	cout << "The result is " << result;
	return 0;
}

#include <iostream>
using namespace std;

int main(){
	int marks;
	cout << "Please Enter your marks \n";
	cin >> marks;
	string output = marks >= 10 ? "Test passed " : "Test Failed";
	cout << output;
}

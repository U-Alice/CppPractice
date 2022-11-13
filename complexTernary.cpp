#include <iostream>

using namespace std;
int marks;
int main(){
	cout << "Please Enter Your marks:" << endl;
	cin >> marks;
	string output = marks >= 16 ? "A" : marks > 14 ? "B" : marks > 10 ? "C" : "D";
	cout << "your grade is " + output;
}

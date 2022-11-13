#include <iostream>
using namespace std;

int main(){
	cout << "Menu \n";
	string operations[5] = { "Add", "Subtract", "Multiply", "Divide","Modulus" };
	int result, num1, num2;
	int choice = 0;
	string operation;
	int size = (sizeof(operations)/sizeof(*operations));
	for( int i =0; i <= size-1; i++){
		cout <<  i+1 << ". " << operations[i] << endl; 
	}
	
	cout << "Enter your operation choice : " ;
	cin  >> choice;
	
	cout << "Enter the First number : ";
	cin >> num1;
	cout << "Enter the second number : ";
	cin >> num2;
	
	switch(choice){
		case(1):
			operation = "+";
			result  = num1 + num2;
			break;
		case(2):
			operation = "-";
			result = num1 - num2;
			break;
		case(3):
			operation = "*";
			result =  num1 * num2;
			break;
		case(4):
			operation = "/";
			result = num1 / num2;
			break;
		case(5):
			operation = "%";
			result = num1 % num2;
			break;
		default:
			cout << "Invalild operand"; 
	
	}
	
	cout << num1 << operation << num2 << " = " <<result; 
	
	return 0;
}

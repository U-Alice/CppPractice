#include <iostream>
using namespace std;


int swap(int array[]){
	int memo = array[0];
	array[0] = array[1];
	array[1] = memo;
}
 
void print(int array[]){
	cout <<  "After swapping the first number is "<<  array[0] << endl;
	cout << "After swapping the second number is "<< array[1] << endl;
}

int main(){
	int numbers[2];
	cout << "Enter the 1st number: ";
	cin >> numbers[0];
	cout << "Enter the 2nd number: ";
	cin >> numbers[1];
	swap(numbers);
	print(numbers);
	
	return 0;
}

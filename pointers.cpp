#include <iostream>

using namespace std;
int main(){
//	int *a = &b;
//	*a += 1;
	int arr[6] = {5,2,4,7,8,1};
	char ab = 'a';
	char *c =  &ab;
	int k = 5;
	int *b = &k;
	float f = 5.2f;
	float *d = &f;
	
	cout << sizeof(c) << endl;
	cout << sizeof(b) <<  endl;
	cout << sizeof(c) << endl;
 //	cout << "The address of pointer a is: " << &a << endl;
//	cout << "The address of variable b is: " << b << endl;
//	cout << "The value of variable b is: " << *a << endl;
	cout << "The address of the first element of the array is: " << *arr;
	
	for(int i = 0; i <6; i++){
		cout << "The address of arr["<<i<<"] is: " << &arr[i]; 
		cout << &arr[i] <<  endl;
		
	}
	return 0;	
}

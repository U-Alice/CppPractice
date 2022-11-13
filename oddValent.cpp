#include <iostream>
using namespace std;

int findDuplicates(int array[]){
	int counter = 1;
	for(int i = 0; i <= sizeof(array) / sizeof(*array);i++){
		for(int j = i+1; j <= sizeof(array)/sizeof(*array) ; j++){
			if(array[i] == array[j]){
				counter++;
			}
			cout << counter << endl;
		}
	}
	if(counter >  1){
		return 1;
	}else{
		return 0;	
	}	
}


int findOdd(int array[]){
	int counter = 0;
	for(int i = 0; i < sizeof(array)/sizeof(*array); i++){
		if(array[i] % 2 != 0){
			counter++;
		}
	}
	if(counter >  0){
		return 1;
	}else{
		return 0;	
	}
}


int main(){
	int length;
	cout << "Please enter the size of the array : ";
	cin >> length; 
	int array[length] = {};
	for(int i = 0; i < sizeof(array)/sizeof(*array); i++){
		cout << "Enter element "<<  i << " : "; 
		cin >> array[i];
	}
	if(findDuplicates(array) == 1 && findOdd(array) == 1){
		cout << "The array is Odd valent";
	}else{
		cout << "The array is not odd valent";
	}
	
	
	return 0;
}

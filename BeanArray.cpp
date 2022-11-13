#include <iostream>
using namespace std;

int firstCondition(int array[]){
	if(array.find(9) && array.find(13)){
		return 1;
	}else{
		return 0;
	}
}
int secondCondition(int array){
	if(array.find(7) && array.find(16)){
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
}

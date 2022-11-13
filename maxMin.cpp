#include <iostream>
using namespace std;
int main(){
	int array[] = {14, 3, 6, 41, 56, 11, 15,9};
	int length =  sizeof(array)/sizeof(*array), max = 0, min=array[0], i;
	
	for(i = 0; i < length; i++){
		
		if(array[i] > max){
			max = array[i];
		}
		if(array[i] <  min){
			min = array[i];
		}
	}
	
	cout << "min = " << min << endl;
	cout << "max = " << max;
}

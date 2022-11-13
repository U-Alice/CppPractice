#include<iostream>
using namespace std;
int main(){
	
	int array[]= {14,3,6,7,41,56,11,15,9};
	int i;
	for(i = 0 ; i<sizeof(array)/sizeof(*array);i++){
	
	int min = array[0];
	int max  = 0;
	
	if(array[i] > max){
		max  = array[i];
		
	}
	if(array[i] < min){
		min = array[i];
	}
	}
	
	cout  << min;
	cout << max;
	
	return 0;
	
	
	
}


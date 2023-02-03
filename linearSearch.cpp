#include <iostream>
using namespace std;
int findIndex(int arr[], int key, int n){
	for(int i = 0 ; i < n-1;i++){
		if(arr[i] == key){
			return i;
		}
	}
	return -1;
}


int main(){
	int array[6] = {5,1,3,2,7,8};
	int index = findIndex(array, 1, 6);
	
	cout << findIndex(array, 1, 6);
}

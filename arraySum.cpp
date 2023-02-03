#include <iostream>



arraySum(int arr[], int n){
	int *a = arr;
	return arr[0] + arr[a+1];
}
int main(){
	int arr[6] = {10, 20, 30, 40, 50, 60};
	cout << arraySum(arr, 6);
	
	return 0;
}

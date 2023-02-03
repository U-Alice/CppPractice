#include <iostream>
using namespace std;
int binarySearch(int arr[], int key, int start, int n){
	int end = n;
	int mid = (start+end)/2;
	if(arr[mid] == key){
		return mid;
	}else if(arr[mid] > key){
		return binarySearch(arr, key, 0, mid-1);
	}else {
		return binarySearch(arr, key, mid+1 , end);
	}
	
}

int main(){
	int sortedArray[7] = {1,2,3,4,5,6,7};
	
	cout << "The index of 1: " << binarySearch(sortedArray, 5, 0 , 7);
}

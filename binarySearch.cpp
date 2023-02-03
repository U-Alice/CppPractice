#include <iostream>



using namespace std;
int binarySearch(int arr[], int key){
	int start = 0, end = 5, mid=0,  position = -1;
	while(start <=  end){
		mid = (start+end)/2;
		cout << mid << "\n";
		if(arr[mid] == key){
			return mid;
		}else if(arr[mid]  > key){
			end = mid - 1;
		}else{
			start = mid + 1;
		}
	}
	return -1;
//	if(position == -1){
//		cout  << "The value was not found, Search unsuccessfull!";
//		return -1;
//	}
//	
}


int main(){
	int array[5] = {1,2,3,4,5};
	int index =  binarySearch(array, 4);
	cout << "The index is : " << index;
}

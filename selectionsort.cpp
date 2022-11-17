#include <iostream>
using namespace std;
int main(){
	int i=0;
	int arr[6] = {7,8,2,3,1,5};
	int n = sizeof(arr) /sizeof(*arr);
	for(i = 0; i < n-1;i++){
		int targetIndex  = i;
		for(int j= i+1; j < n; j++){
			targetIndex = i;
			if(arr[j] < arr[targetIndex]){
				targetIndex = j;
			}
		}
		swap(arr[i], arr[targetIndex]);
	}
	for(int i = 0; i < n; i++){
		printf("%d\t" , arr[i]);
	}
	return 0;
}

#include <iostream>
using namespace std;

void swap(int num1, int num2){
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

void bubblesort(int numbers[], int length){
	cout << length;
	for(int i = 0; i < length; i++){
		if(numbers[i] > numbers[i+1]){
			swap(numbers[i], numbers[i+1]);
		}
	}
}

void print(int numbers[], int length){
	for(int i = 0; i < length ;i++){
		printf("%d \t", numbers[i] );
	}
}
int main(){
	int numbers[5] = {22, 13, 5, 7, 11};
	int length  = sizeof(numbers)/sizeof(*numbers);
	bubblesort(numbers, length);
	print(numbers, length);
	return 0;
}




























































//#include <iostream>
//using namespace std;
//
//
//int main(){
//	int num[] = {5,9,27,55,11,0};
//	int temp;
//	for(int i = 1; i < sizeof(num)/sizeof(*num) ; i++){
//		cout << "Iteration = " <<  i << " : " << endl;
//		for(int j =0; j < (sizeof(num) /sizeof(*num))-1 ; j++ ){
//			if(num[j+1] < num[j]){
//				temp = num[j];
//				num[j] = num[j+1];
//				num[j+1] = temp; 
//			}
//			cout << "'J = " << j <<"'"<< endl;
//			for(int i =0 ; i < sizeof(num) /sizeof(*num); i++){
//				printf("%d\t", num[i]);
//			}
//			cout << endl;
//		}
//
//	cout << endl;	
//	}	
//	cout << "----------The sorted array is : " << endl;
//	for(int i =0 ; i < sizeof(num) /sizeof(*num ); i++){
//		printf("%d\t", num[i]);
//	}
//}

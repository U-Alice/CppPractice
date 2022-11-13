#include <stdio.h>

void compare(int array[], int keyIndex){
	int i, temp;
	for( i  = 0;  i < keyIndex ; i++){
		if(array[i] > array[keyIndex]){
			temp =  array[i];
			array[i] = array[keyIndex];
			array[keyIndex] = temp;
//        printf("%d \t", array[i]);
		}
	}
}
void insertion(int array[], int n){
	int i;
    for(i =0; i < n - 1; i++){
    	int index = i + 1;
    	compare(array, index);
	}
}
void printArray(int array[], int size){
	int i;
	for(i = 0; i < size; i++){
	printf("%d \t", array[i]);
	}
	printf("\n");
}
int main(){
    int array[100], i, n, step, temp;
	printf("Enter the number of elements to be sorted: ");
	scanf("%d", &n);
	for(i = 0; i < n; i++){
	printf("Enter element no. %d: ", i+1);scanf("%d", &array[i]);
	}
	insertion(array, n);
	printArray(array, n);
}

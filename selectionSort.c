#include <stdio.h>
void swap(int array[], int  firstIndex, int secondIndex){
	int temp;
	temp = array[firstIndex];
	array[firstIndex] = array[secondIndex];
	array[secondIndex] = temp;
}
int indexOfMinimum(int array[], int startIndex, int n){
	int minValue = array[startIndex];
	int minIndex = startIndex;
    int i;
	for ( i = minIndex + 1; i < n; i++){
		if(array[i] < minValue){
			minIndex = i;
			minValue = array[i];
		}
	}
	return minIndex;
}
void selectionSort(int array[], int n){
	int i;
	for( i = 0;   i < n; i++){
		int index = indexOfMinimum(array, i, n);
		swap(array, i, index);
	}
}
void printArray(int array[], int size){
	int i;
	for(i = 0; i < size; i++){
	printf("%d ", array[i]);
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
	selectionSort(array, n);
	printf("Sorted array: \n");
	printArray(array, n);
    return 0;
}

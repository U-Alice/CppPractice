#include <stdio.h>
#include <string.h>

int main(){
	char arr[2];
	int i;
	int j;
	
	for(i=0; i<2; i++){
		printf("Enter the an element of your array: ");
		scanf("%s", arr[i]);	
	}
	for(j=0; j<sizeof(arr)/sizeof(arr[0]); j++){
		printf("array elements are: %s\n", arr[j]);
	}
}

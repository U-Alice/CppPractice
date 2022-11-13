#include <stdio.h>

#include <stdlib.h>

int main(){
	
	int num;
	FILE *ptr;
	if((ptr = fopen("names.txt", "r")) == NULL){
		printf("Error! Opening file");
		exit(1);
	}
	fscanf(ptr, "%d", &num);
	
	printf("Value of n=&d", num);
	
	fclose(ptr);
	
	return 0;
		
	
}

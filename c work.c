#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct similarNames{
	char pattern[5];
	int count;
};
int getPattern(struct similarNames *arrayOfNames, char *pattern, int array_size){
	int i;
	for(i = 0 ; i < array_size; i++){
		if(!strcmp(arrayOfNames[i].pattern, pattern)){
            arrayOfNames[i].count++;
        return 1;
        }
	}
	return 0;
}
char* readFile(FILE *file, char *pattern){
	char output[101];
	char* returned = "";
	while(fgets(output, sizeof(output)-1, file) != NULL){
		if(!strncmp(pattern, output, 4)){
			printf("%s", output);
		}
	}
	return returned;
}
void main(){
	char name[101];
	int n;
	FILE *namesFile;
	FILE *readInFile;
	int i=0;
	char buffer[100];
	char current[10];
	char fileName[30];
	char prevLine[101];
	char cset[101];
	char characters[5];
	struct similarNames arr[n];
	int sizeof_arr = 0;

	printf("Enter the number of names you want to enter:\n");
	scanf("%d", &n);
	printf("Enter the file name you would like to open:\n");
	scanf("%s", fileName);
	
	for(i=1; i <= n; i++){
		printf("Enter the %d name: \n",i);
		scanf("%s[^\n]", name);
		if((namesFile = fopen(fileName, "w")) == NULL){
			printf("The file can not be opened\n");
			exit(1);
		}else{	
			fprintf(namesFile,"%s \n", name);
	        strncpy(characters, name, 4);
	        if(getPattern(arr, characters, sizeof_arr) == 0){
	            strncpy(arr[sizeof_arr].pattern, name, 4);
	            arr[sizeof_arr].count = 1;
	            sizeof_arr++;
	        }	
		}
	}	
	fclose(namesFile);
    for(i=0; i< sizeof_arr; i++){
    	if(arr[i].count > 1){
    		printf("\n\n%s: %d\n==================\n", arr[i].pattern , arr[i].count);
    		readInFile = fopen(fileName, "r");
    		readFile(readInFile, arr[i].pattern);
    		fclose(readInFile);
		}
	}
}




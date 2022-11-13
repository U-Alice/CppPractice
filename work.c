#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	FILE *doc;
	char fileName[30];
	char content[300];
	char prevLine[300] = "";
	char name[10];
	printf("Enter the name of file: ");
	scanf("%80s", &fileName);
    FILE *main;
    int num;
    int i;
    
    main = fopen(fileName, "w");
    
    if(main == NULL){
    	printf("can not open file");
	}
	printf("Enter the number of names you want to write: ");
	scanf("%d", &num);
	for(i=0; i<=num ; i++){
		printf("Enter the %d name:", i);
		scanf("%s", name);
		fprintf(main, "%s\n", name);
	}
	fclose(main);
	if((main = fopen(fileName, "r")) == NULL) {
		printf("Unable to open file %s\n", fileName);
		exit(-1);
	}
	printf("\n%s:\n", fileName);
	
	while (fgets(content,sizeof(content)-1,main) != NULL) {
    	if (!strncmp(content,prevLine,4))
    		printf("%s and %s have the same four characters\n",prevLine,content);
    	strcpy(prevLine,content);
	}
 
	fclose(main);
}

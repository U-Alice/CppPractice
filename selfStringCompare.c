#include <stdio.h>
#include <string.h>

int main(){
	char *location[20];
	char output[101];
	char destination[20];
	char prevline[101];
	FILE *input;
	printf("Enter the file to be accessed:\n");
	scanf("%s", &location);
	
	FILE *text;
	text = fopen(location, "r");
	printf("Enter where to write the content:\n");
	scanf("%s", &destination);
	input = fopen(destination, "w");
	if (text == NULL){
		printf("The file could not be acccessed\n");
		exit(-1);
	}
	while(fgets(output, sizeof(output)-1, text) != NULL){
		fputs(output, stdout);
		if(!(strcmp(output, prevline))){
			printf("Duplicate line output: %s", output);
		}else if(!strncmp(output, prevline, 10)){
			printf("starts the same");
		}
		strcpy(prevline, output);
	}
	fclose(text);
	
}

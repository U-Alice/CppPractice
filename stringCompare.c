#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	FILE *text;
	char greeting[81];
	char output[101];
	char prevLine[101] = "";
	printf("show file: ");
	scanf("%80s", &greeting);
	if((text = fopen(greeting, "r")) ==  NULL ){
		printf("unable to Open file %s\n", greeting);
		exit(-1);
	}
	printf("\n%s:\n", greeting);
	while(fgets(output, sizeof(output)-1, text) != NULL){
		if(!strcmp(output, prevLine))
		printf("duplicate line %s", output);
		else if(!strncmp(output, prevLine, 10)){
		printf("starts the same");
	}
		strcpy(prevLine, output);
	}
	fclose(text);
}

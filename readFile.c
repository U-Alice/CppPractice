#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	FILE* text;
	char greeting[81];
	char output[101];
	printf("show file: ");
	scanf("%80s", &greeting);
	if((text = fopen(greeting, "r")) ==  NULL ){
		printf("unable to Open file %s\n", greeting);
		exit(-1);
	}
	printf("\n%s:\n", greeting);
	while(fgets(output, sizeof(output)-1, text) != NULL)
		fputs(output, stdout);
	fclose(text);
}

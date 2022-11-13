#include <stdio.h>
#include <string.h>

void main() {
	char fname[81];
	char buffer[101];
	char noncom[101];
	FILE *instream;
	char *loc;
	printf("File: ");
	scanf("%80s",fname);
	if ((instream = fopen(fname,"r")) == NULL) {
    printf("Unable to open file %s\n",fname);
    exit(-1);
  }
  /* read line */
	while (fgets(buffer,sizeof(buffer)-1,instream) != NULL) {
	    /* Look for the character % in the line */
	    if ((loc = strchr(buffer,'%')) != NULL) {
	      /* Copy the characters before the % to noncom */
	      strncpy(noncom,buffer,(loc - buffer));
	      	/* Add a delimiter to noncom */
    noncom[loc - buffer] = '\0';
    printf("%s\n",noncom);
	    }
	    else
	      printf("%s",buffer);
	}
	  fclose(instream);
}

#include <stdio.h>
#include <stdlib.h>
struct threeNum{
	int n1, n2, n3;
};
int main(){
	int n;
	struct threeNum num;
	FILE *fptr;
	if ((fptr = fopen("binaryFile.bin","wb")) == NULL){
	printf("Error! opening file");
	// Program exits if the file pointer returns NULL.
	exit(1);
}

fseek(fptr,-sizeof(struct threeNum), SEEK_END);

for(n = 1; n < 5; ++n){
	num.n1 = n;
	num.n2 = 5*n;
	num.n3 = 5*n + 1;
//	fwrite(&num, sizeof(struct threeNum), 1, fptr);
    fread(&num , sizeof(struct threeNum), 1 , fptr);
    printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2, num.n3);
	fseek(fptr, -2*sizeof(struct threeNum), SEEK_CUR);
}
fclose(fptr);
}


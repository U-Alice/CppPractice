#include <stdio.h>

int main(){
	struct complex{
		float real;
		float complex;
	} first, second, sum;
	printf("Enter the first complex number:\n");
	scanf("%f %f", &first.real, &first.complex);
	printf("Enter the second complex number:\n");
	scanf("%f %f", &second.real, &second.complex);
	
	sum.real = first.real + second.real;
	sum.complex =  first.complex + second.complex;
	printf("\n %fi + %fj", sum.complex, sum.real);
}

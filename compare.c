#include <stdio.h>

int get_greatest(int a, int b, int c, int d){
	 int greatest(a,b){
		if(a>b){
			return a;
		}else{
			return b;
		}
	}
	if(greatest(a,b) == a){
		if(greatest(a, c) == c){
			return greatest(c,d);
		}else{
			return greatest(a,d);
		}
	}else{
		if(greatest(b, c) == c){
			return greatest(c,d);
		}else{
			return greatest(b,d);
		}
	}
}
int main(){
	printf("%d", get_greatest(1, 2, 4, 5));
	return 0;
}
//recursive function
//int sum(int n);
//int main(){
//	int number, result;
//	
//	printf("Enter a positive number:");
//	scanf("%d", &number);
//	
//	result = sum(number);
//	
//	printf("sum = %d", result);
//	
//	return 0;
//}
//int sum(int num){
//	if(num!=0)
//		return num + sum(num -1); 
//	else
//		return num;
//}

#include <stdio.h>

int main() {
	int i = 1;
	int num;
	int newNum;
	int fib(int num){
		if(num == 1){
			return(0);
		}else if(num == 2 || num == 3){
			return(1);
		}else{
			return (fib(num -1) + fib(num - 2));
		}		
	}
	int result = fib(5);
	printf("fibonacci : %d", result);
    return 0;
}


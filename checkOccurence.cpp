#include <iostream>

int main(){
	int count_x(char *p, char x){
		if(p == nullptr )return 0;
		int count = 0;
		for(;p!= 0; ++P)
		if(*p == x)
			++count;
		return count;
	}
}

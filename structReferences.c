#include <stdio.h>
#include <string.h>
struct charset{
	char s;
	int i;
};
void keyValue(char* s, int *i){
	scanf("%c %d", s, i);
}
int main(){
	int j;
	struct  charset cs;
	keyValue(&cs.s, &cs.i);
	printf("%c %d", cs.s, cs.i);
	return 0;
}

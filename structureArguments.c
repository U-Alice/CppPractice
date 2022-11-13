#include <stdio.h>
struct point {
	int x;
	int y;
};
void print(int* i, int* j){
	printf("%d %d\n", i, j);
}
int main(){
	struct point p1 = {12, 17};
	struct point p2 = {22, 23};
	print(p1.x, p1.y);
	print(p2.x, p2.y);
	return 0;
}

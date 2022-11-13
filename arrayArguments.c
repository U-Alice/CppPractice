#include<stdio.h>
struct point{
	int x;
	int y;
};
void print(struct point arr[]){
	int i;
for(i=0; i<4; i++)
	printf("%d %d\n", arr[i].x, arr[i].y);
}
int main(){
	struct point arr[4] = {{12,42},{43,13},{14,44},{45,15},{16,46}};
	print(arr);
	return 0;
}

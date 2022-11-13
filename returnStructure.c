#include <stdio.h>
struct point{
	int x;
	int y;
};
struct point edit(struct point p){
	(p.x)++;
	p.y = p.y + 14;
	return p;
}
void print (struct point p){
	printf("%d %d\n", p.x, p.y);
}
void main(){
	struct point p1 = {12, 17};
	struct point p2 = {22, 23};
	p1 = edit(p1);
	p2 = edit(p2);
	print(p1);
	print(p2);
	
}

#include <iostream>
using namespace std;
void print(){
	cout << "Running perfectly" << endl;
}
double maximum(double x, double y, double z){
	double max = x;
	if(y > max)
		max = y;
	else if(z > max)
		max = z;	
	return max;
}
void duplicate(int a , int b, int c){
	a *= 2;
	b *= 2;
	c *= 2;
}
int main(){
	int x = 5, y =7, z =8;
	duplicate(x, y, z); 
	cout << " X: " << x << " Y: " << y << " Z: " << z << endl;
	print();
    cout <<  "The maximum is " << maximum(1.49, 39.49, 39.29);
}

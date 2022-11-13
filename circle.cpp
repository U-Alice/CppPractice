#include <iostream>
#include <math.h>   
using namespace std;


#define PI 3.14
float area(float radius){
	float area = PI * pow(radius , 2);
	return area;
}
float circumference(float radius){
	float circ = radius * 2 * PI;
	return circ;
}

int main(){
	float radius;
	cout << "Enter the radius: ";
	cin >> radius;
	cout << "The area is : "<< area(radius) <<endl << "The circumference is: " << circumference(radius);
	return 0;
}


#include <iostream>
#include <math.h>
using namespace std;

int main(){
	const double PI = 3.14;
	double radius;
	cout << "Enter the radius of the sphere : ";
	cin >> radius;
	
	double volume = (pow(radius, 3) * (4) * PI) / 3; 
	
	cout << "The volume of the sphere is : " << volume;
	
	return 0;
}

#include <iostream>
#include <cmath>

using namespace std;
#define PI 3.14159265;
int main(){
	float radius;
	double circumference = 2 * radius * PI;
	double area = PI * radius * radius;
	cout << "Please enter the radius : ";
    cin >> radius;
	cout << "The circumference of the circle is " << circumference << " and has area of " << area << "." << endl;
}

#include <iostream>
using namespace std;


int main(){
	float length;
	float width;

	cout << "Enter the length and width of the rectangle: ";
	cout << "Length: ";
	cin >> length;
	cout <<  "Width: ";
	cin >> width;
	
	cout << "The area of the rectangle is " << length * width << " and the perimeter of the rectangle is: " << (length + width) * 2 << endl; 
	return 0;
}

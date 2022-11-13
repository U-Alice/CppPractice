#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int a = 1, b= -3, c =-4;
	float x1 = (sqrt(pow(b, 2) - 4*(a*c)) -b) / (2 * a);
	float x2 = (-(sqrt(pow(b, 2) - 4*(a*c))) -b) / (2 * a);
	cout << "The roots are : " << x1 << " and " << x2 <<endl;
	return 0;
}

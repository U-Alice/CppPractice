#include <iostream>
using namespace std;
namespace finance{
int amount = 15;	
}
int main(){
	int amount = 12;
	cout << "The amount is " << amount << endl;
	cout << "The amount from namespace finance is "<< finance ::amount << endl;
} 

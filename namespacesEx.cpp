#include <iostream>
#include <cmath>

using namespace std;
namespace userDefined{
	int insideNamespace = 5;
	int cout(){
		return insideNamespace;
	}
}

int myGlobal = 10;
int cout(){
	return pow(myGlobal, 2);
}
int main(){
	int cout = 10;
   	std::cout << "\n The local variable cout in main is " << cout << endl;
	std::cout << "The variable in userDefined namespace is " << userDefined::insideNamespace << endl;
	std::cout << "The output of cout() in userDefined is "<< userDefined::cout() << endl;
	std::cout << "The value of myGlobal is " << ::myGlobal << endl;
	std::cout << "The output  of global cout() is " << ::cout();
	return 0;
}

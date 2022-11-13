#include <iostream>
#include <cctype>
using namespace std;

int main(){
	string name = "alice";
	string uppercase;
	for(int i = 0; i < sizeof(name) ; i++){
		uppercase += toupper(name[i]);
	}
	cout << uppercase;
	return 0;
}

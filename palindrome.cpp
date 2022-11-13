#include <iostream>

using namespace std;

int main(){
	string name;
	cout << "Enter a string: ";
	getline(cin, name);
    string reversed;
    for(int i=sizeof(name); i >= 0; i--){
    	reversed += name[i];
	}
	if(reversed ==  name){
		cout <<  name << " is palindrome" << endl;
	}else{
		cout << name << " is not a palindrome" << endl;
	}

	return 0;
}


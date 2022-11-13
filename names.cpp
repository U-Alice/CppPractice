#include <iostream>
#include <time.h>   
using namespace std;


int main(){
	string firstName, lastName;
	cout << "First name : " ;
	cin >> firstName;
	cout << "Last Name : ";
	cin >> lastName;
	
	cout << "Your Name is " <<  lastName << " " << firstName;
	return 0;
}

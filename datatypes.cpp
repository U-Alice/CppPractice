#include <iostream>


//int main(){
//	using namespace std;
//	int score = 5;
//	score = 7;
//	int age;
//	float ration = 5.6f;
//	double ratio= 5.6;
//	string name= "John";
//	cout <<name << " scored "  << score << " and " << ratio << endl;	
//	cout << "Enter your name ";
//	getline(cin, name);
//	cout << "Enter your age ";
//	cin >> age;
//	cout << " My name is " << name <<  " And I am " << age;
//}





//Exercise 1


//int main(){
//	using namespace std;
//	string firstName;
//	string lastName;
//    string fullName = firstName + lastName ;
//    int age;
//
//    cout << "Enter your first name" <<endl;
//    getline(cin, firstName);
//    cout << "Enter your last name" <<endl;
//    getline(cin, lastName);
//    cout << "Enter your age "<< endl;
//    cin >> age;
//    cout << "My name is "<< fullName << " and I am " << age << " Years old";
//
//}


//Exercise 2


int main(){
	using namespace std;
    string fullName;
    float initialAmount;
    float rate;
    float interest;
    int time;
    
    cout << "Enter your full name ";
    getline(cin , fullName);
//    cin.ignore();
    cout << "Enter your initial amount ";
    cin >> initialAmount;
    cout << "Enter your interest rate";
    cin >> rate;
    cout << "Enter your time";
    cin >> time;

    interest = (initialAmount * rate * time ) / 100;
    cout << "Client " << fullName << " With interest Rate " << rate << " and " << initialAmount <<  " Within " << time << " has an interest of " << interest;
	
} 




#include <iostream>

using namespace std;
struct student{
	string name;
	int age;
	int rollNumber;
	double marks;
};

int main(){
	
	student students[3];
	
	for(int i =0; i < 3; i++){
		cout << "Enter the name of student " << i+1  << ":";
		cin >> students[i].name;
		cout << "Enter the age of student " << i+1 << ":";
		cin >> students[i].age;
		cin.ignore();
		cout << "Enter the rollNUmber of student " << i+1 << ":";
		cin >> students[i].rollNumber;
		cin.ignore();
		cout << "Enter the marks of student " << i + 1 << ":";
		cin >> students[i].marks;
		cin.ignore();
	}
	
	for(int i=0; i < 3; i++){
		cout << students[i].rollNumber << "," << students[i].name << "," << students[i].age << "," << students[i].marks;
		cout << "\n";
	}

	return 0;
}

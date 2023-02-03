#include <iostream>

using namespace std;
struct Student{
	string name;
	int age;
	void display(){
		cout <<  age << endl;
		cout << name << endl;
	}
};

int main(){
	Student s = {"Mary" , 10};
	Student p;
	p.age = 10;
	p.name = "Damas";
	s.display();
	return 0;
}

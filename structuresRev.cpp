#include <iostream>
using namespace std;

struct Student{
    int rollNumber;
    int age;
    string name;
    double marks;

    void printInfo(){
        cout << rollNumber << "," << name << "," << age << "," << marks;
    }
} student1, student2, student3;


int main(){

    student1.name = "Alice";
    student1.age = 16;
    student1.marks = 78.9;
    student1.rollNumber =  1010;
    student1.printInfo();

    return 0;
}
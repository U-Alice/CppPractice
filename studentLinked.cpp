#include <iostream>
using namespace std;

class Student{
    public:
    int id;
    int age;
    string name;
    Student *student;
    Student (int roll, string n , int a){
        this->id = roll;
        this->age = a;
        this->name = n;
        this->student=NULL;
    }
};

void display(Student *f){
    cout << "*********STUDENTS*********" << endl;
    while(f != NULL){
        cout << f->id << " " << f->name << " " << f->age << endl;
        f = f->student;
    }
};


int main(){
    Student *student1 = new Student(1,"Alice", 15);
    Student *student2 = new Student(2,"Mireille", 17);
    Student *student3 = new Student(3,"Lois", 16);
    Student *student4 = new Student(4,"Dorcus", 12);
    Student *student5 = new Student(5,"Gilbert", 19);
    student1->student = student2;
    student2->student = student3;
    student3->student = student4;
    student4->student = student5;
    student5->student = NULL;
    display(student1);
}



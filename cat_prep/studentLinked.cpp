#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

class Student
{
public:
    string rollNumber;
    string name;
    int age;
    float marks;

    Student *next;
    Student(){};
};
bool check_no(string rollNumber)
{
    for (char c : rollNumber)
    {
        if (!isdigit(c))
        {
            cout << "Roll number should be a positive integer" << endl;
            return false;
        }
    }
    return true;
}
void writeToFile(Student *head)
{
    ofstream file;
    file.open("studentLinked.csv", std::ios_base::app);
    while (head != NULL)
    {
        file << head->rollNumber << "," << head->name << "," << head->age << "," << head->marks << endl;
        head = head->next;
    }
}
void insertLinkedList(Student **head_ref, Student *new_data)
{
    Student *last = *head_ref;

    if (*head_ref == NULL)
    {
        *head_ref = new_data;
        return;
    }

    while (last->next != NULL)
    {
        last = last->next;
    }

    last->next = new_data;
    return;
}
void printLinkedList(Student *head)
{
    int sum = 0;
    int count = 0;
    while (head != NULL)
    {
        cout << head->rollNumber << "," << head->name << "," << head->age << "," << head->marks << endl
             << endl;
        count++;
        sum += head->marks;
        head = head->next;
    }
    cout << "Average marks is : " << sum / count << endl;
}

Student *readFromFile(string fileName)
{
    ifstream myReadFile;
    myReadFile.open(fileName, ios::in);
    string mystring;
    string field2, field3;
    Student *head = NULL;
    while (getline(myReadFile, mystring))
    {
        Student *data = new Student();
        stringstream ss(mystring);
        getline(ss, data->rollNumber, ',');
        getline(ss, data->name, ',');
        getline(ss, field2, ',');
        getline(ss, field3, ',');
        data->age = stoi(field2);
        data->marks = stof(field3);
        insertLinkedList(&head, data);
    }
    return head;
}

int main()
{
    int length;
    cout << "***********CREATING STUDENTS LIST***************" << endl
         << endl;
length:
    cout << "How many students do you want to insert in the list : ";
    cin >> length;
    if (length < 5)
    {
        cout << "students number too low!" << endl
             << endl;
        // goto length;
    }
    Student *head = NULL;
    for (int i = 1; i <= length; i++)
    {
        Student *newStudent = new Student();
    rollNumber:
        cout << "Enter student " << i << " roll number: ";
        cin >> newStudent->rollNumber;
        if (!check_no(newStudent->rollNumber))
        {
            goto rollNumber;
        }
        cout << "Enter student " << i << " name: ";
        cin >> newStudent->name;
    age:
        cout << "Enter student " << i << " age: ";
        cin >> newStudent->age;

        if (newStudent->age > 30 || newStudent->age < 10)
        {
            cout << "Invalid age number";
            goto age;
        }
    marks:
        cout << "Enter student " << i << " marks: ";
        cin >> newStudent->marks;
        if (newStudent->marks > 50 || newStudent->marks < 0)
        {
            goto marks;
        }
        cout << endl;
        newStudent->next = NULL;
        insertLinkedList(&head, newStudent);
    }
    writeToFile(head);
    int option;
option:
    cout << "1. Read from file" << endl;
    cout << "2. Read inputed data" << endl;
    cin >> option;
    if (option == 1)
    {
        cout << "Reading data: " << endl
             << endl;
        printLinkedList(readFromFile("studentLinked.csv"));
    }
    else if (option == 2)
    {
        cout << "Reading data: " << endl
             << endl;
        printLinkedList(head);
    }
    else
    {
        cout << "Invalid input" << endl;
        goto option;
    }

    return 0;
}
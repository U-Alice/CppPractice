#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;
struct Student
{
	string name;
	int age;
	string rollNumber;
	double marks;
};
bool check_no(string rollNumber) {
    for (char c : rollNumber) {
        if (!isdigit(c)) {
            cout << "Roll number should be a positive integer" << endl;
            return false;
        }
    }
    return true;
}


void merge(vector<Student> &arr, int left, int mid, int right)
{
	int i, j, k;
	int n1 = mid - left + 1;
	int n2 = right - mid;
	vector<Student> Left, Right;
	for (i = 0; i < n1; i++)
		Left.push_back(arr[left + i]);
	for (j = 0; j < n2; j++)
		Right.push_back(arr[mid + 1 + j]);
	i = 0;
	j = 0;
	k = left;
	while (i < n1 && j < n2)
	{
		if (Left[i].marks >= Right[j].marks)
		{
			arr[k] = Left[i];
			i++;
		}
		else
		{
			arr[k] = Right[j];
			j++;
		}
		k++;
	}
	while (i < n1)
	{
		arr[k] = Left[i];
		i++;
		k++;
	}
	while (j < n2)
	{
		arr[k] = Right[j];
		j++;
		k++;
	}
}
void mergeSort(vector<Student> &arr, int l, int r)
{
	if (l < r)
	{
		int m = (r + l) / 2;
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);
		merge(arr, l, m, r);
	}
}

int main()
{
	Student students[100];
	ofstream myfile;
	ifstream myReadFile;
	myReadFile.open("export.txt", ios::in);
	myfile.open("export.txt", std::ios_base::app);
	string mystring;
	int n;
	cout << "**********************REGISTER YOUR STUDENTS************************" << endl;
	cout << "Enter the number of students : ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter the name of student " << i + 1 << ":" << endl;
		cin >> students[i].name;
	age:
		cout << "Enter the age of student " << i + 1 << ":" << endl;
		cin >> students[i].age;
		cin.ignore();
		if (students[i].age > 30 || students[i].age < 10)
		{
			cout << "Entered age is invalid!" << endl;
			goto age;
		}
	rollNumber:
		cout << "Enter the rollNumber of student " << i + 1 << ":" << endl;
		cin >> students[i].rollNumber;
		cin.ignore();
		if(!check_no(students[i].rollNumber)){
			goto rollNumber;
		}

	marks:
		cout << "Enter the marks of student " << i + 1 << ":" << endl;
		cin >> students[i].marks;
		cin.ignore();
		if (students[i].marks > 50 || students[i].marks < 0)
		{
			cout << "Entered marks are invalid!!" << endl;
			goto marks;
		}
	}

	for (int i = 0; i < n; i++)
	{
		if (myfile.is_open())
		{
			myfile << students[i].rollNumber << "," << students[i].name << "," << students[i].age << "," << students[i].marks;
			myfile << "\n";
		}
	}
	cout << endl << endl << "**********DISPLAY STUDENTS***********" << endl << endl;
	vector<Student> data;
	int average = 0;
	myfile.close();
	if (myReadFile.is_open())
	{
		string field1, field2, field3;
		while (getline(myReadFile, mystring))
		{
			Student student;
			stringstream ss(mystring);
			getline(ss, field1, ',');
			getline(ss, student.name, ',');
			getline(ss, student.rollNumber, ',');
			getline(ss, field3, ',');
			student.age = stoi(field1);
			student.marks = stof(field3);
			data.push_back(student);
			average += student.marks;
		}
	}

	myReadFile.close();
	mergeSort(data, 0, data.size() - 1);
	for (int j = 0; j < data.size(); j++)
	{
		cout << j+1 << "." << endl ;
		cout << "Roll Number: " << data[j].rollNumber << endl;
		cout << "Name: " << data[j].name << endl;
		cout << "Age: " << data[j].age << endl;
		cout << "Marks: " << data[j].marks << endl;
		cout << endl << endl;
	}
	cout << endl
		 << endl;
	cout << "***  Average marks = " << average / data.size() << "*****" << endl;
}

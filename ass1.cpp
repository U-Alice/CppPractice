#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;
struct student{
	string name;
	int age;
	int rollNumber;
	double marks;
};



void mergeArrays(int x[], int y[], int a[], int s , int e){
	int mid  = (s+e)/2;
	int i = s;
	int j = mid + 1;
	int  k = s;
	
	while(i <= mid && j <= e){
		if(x[i] < y[j]){
			a[k] = x[i];
			k++;
			i++;
		}else{
			a[k] = y[j];
			j++;
			k++;
		}
	
	}
	while(i <= mid){
		a[k] = x[i];
		k++;
		i++;
	}
	
	while(j <= e){
		a[k] = y[j];
		k++;
		j++;
	}
}


void mergeSort(int array[], int s, int e){
	int mid = (s+e) / 2;
	int leftArray[100];
	int rightArray[100];
	if(s >= e){
		return;
	}
	for(int i = s; i <= mid; i++){             
		leftArray[i] = array[i];
	}
	for(int i = mid+1; i <= e; i++){
		rightArray[i] = array[i];
	}	
	mergeSort(leftArray, s , mid);
	mergeSort(rightArray, mid+1, e);
	mergeArrays(leftArray, rightArray, array, s , e);
}



int main(){
	
	student students[3];
	ofstream myfile;
	ifstream myReadFile("export.txt");
	myfile.open("export.txt");
	string mystring;
	int n;
	cout << "Enter the number of students : ";
	cin >> n; 
	for(int i =0; i < n; i++){
		cout << "Enter the name of student " << i+1  << ":";
		cin >> students[i].name;
		age:
		cout << "Enter the age of student " << i+1 << ":";
		cin >> students[i].age;
		cin.ignore();
		if(students[i].age > 30 || students[i].age <  10){
			cout << "Entered age is invalid!";
			goto age;
		}
		rollNumber: 
		cout << "Enter the rollNumber of student " << i+1 << ":";
		cin >> students[i].rollNumber;
		cin.ignore();
		if(isdigit(students[i].rollNumber)){
			cout << "The entered rollNumber is invalid";
		}
		marks:
		cout << "Enter the marks of student " << i + 1 << ":";
		cin >> students[i].marks;
		cin.ignore(); 
		if(students[i].marks > 50 || students[i].marks < 0){
			cout  << "Entered marks are invalid!!";
			goto marks;
		}
	}
	
	for(int i=0; i < n; i++){
		myfile << students[i].rollNumber << "," << students[i].name << "," << students[i].age << "," << students[i].marks;
		myfile << "\n";
	}
  	string data[n][3] = {};
    if(myfile.is_open()){
    	while(getline(myReadFile, mystring)){
    		size_t pos = 0;
    		string token;
    		string delimiter = ",";
    		int i = 0;
		    int j = 0;
			while ((pos = mystring.find(delimiter)) != string::npos) {
			    token = mystring.substr(0, pos);
			    data[i][j] = token;
			    j++;
			    mystring.erase(0, pos + delimiter.length());
			}
			i++;
		}
	}
	for(int i=0; i < n; i++){
		cout << data[i][0] << "," <<data[i][1] << "," << data[i][2] << "," << data[i][3];
		cout << "\n";
	}
//	student studentData[n];
//	stringstream ss;
//	
//	for(int i = 0 ; i < n;  i++){
//		studentData[i].name = data[i][1];
//		cout << "name" << data[i][1];
//		ss << data[i][2];
//		ss >> studentData[i].age;
//		ss << data[i][0];
//		ss >> studentData[i].rollNumber;
//		ss << data[i][3];
//		ss >> studentData[i].marks;
//		
//	}
//	for(int i=0; i < n; i++){
//		cout << studentData[i].rollNumber << "," << studentData[i].name << "," << studentData[i].age << "," << studentData[i].marks;
//		cout << "\n";
//	}
	
	return 0;
}

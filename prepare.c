#include <stdio.h>
struct student{
	char name[20];
	int age;
	int rollNumber;
	float marks;
} students[3];
int i;

void getDetails(struct student arr[]){
	for(i=0; i<3; i++){
		printf("%d student details:\n\t\t", i);
		printf("Age:");
		scanf("%d", &arr[i].age);
		printf("Name:");
		scanf("%s",arr[i].name);
		printf("Roll number: \n");
		scanf("%d", &arr[i].rollNumber);
		printf("marks:");
		scanf("%f", &arr[i].marks);
	}
}
void print(struct student arr[3]){
	for(i=0; i<3; i++){
		printf("%d %d %f %s\n", arr[i].age, arr[i].rollNumber, arr[i].marks, arr[i].name );
	}
}
void main(){
	getDetails(students);
	print(students);
}

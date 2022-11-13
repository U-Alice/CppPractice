#include <iostream>
using namespace std;


int main(){
	int num[] = {5,9,27,55,11,0};
	int temp;
	for(int i = 1; i < sizeof(num)/sizeof(*num) ; i++){
		cout << "Iteration = " <<  i << " : " << endl;
		for(int j =0; j < (sizeof(num) /sizeof(*num))-1 ; j++ ){
			if(num[j+1] < num[j]){
				temp = num[j];
				num[j] = num[j+1];
				num[j+1] = temp; 
			}
			cout << "'J = " << j <<"'"<< endl;
			for(int i =0 ; i < sizeof(num) /sizeof(*num); i++){
				printf("%d\t", num[i]);
			}
			cout << endl;
		}

	cout << endl;	
	}	
	cout << "----------The sorted array is : " << endl;
	for(int i =0 ; i < sizeof(num) /sizeof(*num ); i++){
		printf("%d\t", num[i]);
	}
}

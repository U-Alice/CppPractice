#include <iostream>
using namespace std;

int occurrence(int array[]){
	int highestFrequency = 0;
	int occurences = 0;
	int number;
	for( int i = 0; i <= (sizeof(array) / sizeof(*array)); i++){
		occurences = 0;
		for(int j = 0 ;  j <= 10; j++ ){
			if(array[i] == array[j]){
				occurences = occurences +  1;
			}
		}
		if(occurences >  highestFrequency){
			highestFrequency = occurences;
			number = array[i];
		}
		
	}
	return number;
}
int main(){
	int numbers[] = {4,2,3,4,4,4,4,2,2};
	cout <<"Number with highest occurence is : " << occurrence(numbers);
	return 0;
}

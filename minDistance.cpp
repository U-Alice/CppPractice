#include <iostream>
using namespace std;


void printFactors(int array[], int length){
	for(int i = 0; i < length;  i++){
		printf("%d\n", array[i]);
	}
}

int findMinDistance(int array[], int length){
	int minDistance = array[1] - array[0];
	for(int i = 1; i < length-1; i++){
		int distance = array[i+1] - array[i];
		if(distance < minDistance){
			minDistance = distance;
		}
	}
	return minDistance;
}
int main(){
	int factors[100] = {};
	int number =  45;
	int length =0;
	for(int i=1; i <= number; i++ ){
		if(number % i == 0){
			factors[length] = i; 
			length++;
		}
	}
	printFactors(factors, length);
	cout << findMinDistance(factors, length);
	return 0;
}

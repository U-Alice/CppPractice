#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int countDigit(int n)
    {
        int count = 0;
        while (n != 0) {
            n = n / 10;
            ++count;
        }
        return count;
    }
    
int occurrence(int array[], int length){
	int highestFrequency = 0;
	int occurences = 0;
	int number;
	for( int i = 0; i <= length; i++){
		occurences = 0;
		for(int j = 0 ;  j <= length; j++ ){
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
	int num = 2333549;
	int length = countDigit(num);
    int numbers[length];
	for(int i=0;i < length; i++){
		numbers[i]=num%10;
		num/=10;	
	}
	cout <<"Number with highest occurence is : " << occurrence(numbers, length);
	return 0;
}

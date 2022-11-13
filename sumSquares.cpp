#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int sum =0;
	int sumSquares = 0;
	int i =0;
	int j =0;
	while(i <= 10){
		sum += i;
		i++;
	}
	while(j <= 10){
		sumSquares += pow(j,2);
		j++;
	}
	cout << pow(sum, 2) << endl;
	cout << sumSquares << endl;
	cout <<  pow(sum , 2) - sumSquares;
	return 0;
}

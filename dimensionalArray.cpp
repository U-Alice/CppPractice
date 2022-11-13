#include <iostream>
using namespace std;
int main(){
	int numbers[3][4] = { {7, 7, 8, 10} , {2, 12, 12 ,13} , {9, 10, 11, 15}};
	cout << endl;
	for(int i = 0; i < 3 ; i++){
		for(int j = 0 ; j <4; j++){
			cout << numbers[i][j] << "\t";
		}
		cout << endl;
	}
	return 0;
}

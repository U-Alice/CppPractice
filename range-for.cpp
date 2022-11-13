#include <iostream>
using namespace std;
int main(){
	int array1[5] = {1,2,3,4,5};
	for(int &x : array1){
		cout << x;
	}
}

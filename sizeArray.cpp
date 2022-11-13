#include <iostream>

using namespace std;

int main(){
	int numbers[] = {1,2,3};
	int size = 0;
	int i = 0;
	while(numbers[i] != 0){
		size++;
		i++;
	}
	cout << size;
	return 0;
}

#include <iostream>
using namespace std;

int main(){
    int scores[] = {52, 75,68, 88, 63, 75, 90, 78};
	
	int item=10, k = 3, len = (sizeof(scores)/sizeof(*scores)), j = len-1;
	
	while(k <= j){
		scores[k] = scores[k+1];
		k++; 
	}

	len -= 1;
	for(int i=0; i < len; i++){
		cout << scores[i] << endl;
	}
	return 0;
}

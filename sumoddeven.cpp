#include <iostream>
using namespace std;
oddEvenDiff(int a[]){
	int sumEven = 0;
	int sumOdd = 0;
	for(int i =0 ; i < 10 ;i++){
		if(a[i] % 2 == 0){
			sumEven += a[i];
		}else{
			sumOdd +=a[i];
		}
	}
//	cout << sumEven << "," << sumOdd;
	return sumOdd - sumEven;
}
int main(){
	int numbers[10] = {1,2,3,4,5,6,7,8,9,10};

	cout << "The difference is : "<< oddEvenDiff(numbers) << endl;

}

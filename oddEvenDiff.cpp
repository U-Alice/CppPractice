#include <iostream>
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
    

int main(){
	int num = 2333549, maxEven = 0, maxOdd = 0;
	int length = countDigit(num);
    int numbers[length];
	for(int i=0;i < length; i++){
		numbers[i]=num%10;
		num/=10;	
	}
	
	for(int i = 0; i < length ; i++){
		if(numbers[i] %2 == 0){
			maxEven += numbers[i];
		}else{
			maxOdd += numbers[i];
		}
	}
	int difference = maxEven - maxOdd;
	cout << "The difference is : " << difference;
	return 0;
}

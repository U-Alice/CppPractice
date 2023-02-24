#include <iostream>

using namespace std;


int binarySearch(int array[], int n, int key){
    int start = 0;
    int end = n-1;
    while(start <= end){
         int mid = start + (end-start)/2;
        if(array[mid]  == key){
            return mid;
        }else if(array[mid] > key){
            end =  mid -1;
        }else{
            start =  mid + 1;
        }
    }
    return -1;
}


int main(){
    int array[6] = {0,1,2,3,4,5};
    cout <<  "Found: " << binarySearch(array, 6, 3);
}
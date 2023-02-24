#include <iostream>

using namespace std;

int linearSearch(int array[], int n, int key){
    int i = 0;
    while(i <= n){
        if(array[i] == key){
            return i;
        }
        i++;
    }
    return -1;
}

int main(){
    int array[6] = {0,1,2,3,4,5};
    cout <<  "Found: " << linearSearch(array, 6, 3);

}
#include <iostream>

using namespace std;

int array[5], rear = -1, front = -1, n =5;

void enqueue(int array[], int n, int element){
    if(rear == n-1){
        cout << "The queue is full";
        return;
    }else{
        rear = rear + 1;
        array[rear] = element;
    }
    return;
}
void dequeue(int array[], int n, int element){
    if (front = -1){
        
    }
}
void display(int array[]){
    for(int i = 0; i < n; i++){
        cout <<  array[i] << "\t";
    }
}
int main(){
    enqueue(array, 5, 1);
    display(array);

}
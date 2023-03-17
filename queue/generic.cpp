#include <iostream>
using namespace std;
//int queue[100], n = 100, front = - 1, rear = - 1;
template <typename T>

struct Queue{
    int front, rear, n;
    T* queue;

    Queue(int c){
        front = rear = -1;
        n =c;
        queue = new T[n];
    }
    void enqueue(){
        int val;
    if(rear == n-1){
        cout << "The queue is full";
        return;
    }else{
        cout << "Enter the element : ";
        cin >> val;
        front = 0;
        rear = rear + 1;
        queue[rear] = val;
    }
    return;
    }
    void dequeue(){
        if (front == -1 || front > rear){
            cout << "The queue is empty!!";
        }else{
            front = front + 1;
        }
    }
    void display(){
        if(front == -1){
            cout << "The queue is empty!";
            return;
        }
        for(int i = front; i < n; i++){
            cout <<  queue[i] << "\t";
        }
    }
    
};

int main(){
    Queue<double> q(5);
    int ch;
    cout<<"1) Insert element to queue"<<endl;
    cout<<"2) Delete element from queue"<<endl;
    cout<<"3) Display all the elements of queue"<<endl;
    cout<<"4) Read element from the queue"<<endl;
    cout<<"5) Exit"<<endl;
do {
    cout<<"Enter your choice : "<<endl;
    cin>>ch;
    switch (ch) {
        case 1: q.enqueue();
        break;
        case 2: q.dequeue();
        break;
        case 3: q.display();
        break;
        case 5: cout<<"Exited The Queue"<<endl;
        break;
        default: cout<<"Invalid Operation"<<endl;
    }
} while(ch>0 && ch<5);
return 0;
}
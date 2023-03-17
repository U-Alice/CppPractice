#include <iostream>
using namespace std;
// int queue[100], n = 100, front = - 1, rear = - 1;
template <typename T>

struct Queue
{
    int front, rear, capacity, size;
    T *queue;

    Queue()
    {
        front = -1;
        rear = -1;
        capacity = 5;
        size = 0;
        queue = new T[n];
    }
    void enqueue()
    {
        int val;
        if (size == capacity)
        {
            T *newArr = new T[2 * capacity];
            int j = 0;
            for (int i = front; i < capacity; i++)
            {
                newArr[j] = arr[i];
                j++;
            }
            front = 0;
            rear = capacity;
            capacity = capacity * 2;
            delete []queue;
            queue = newArr;
        }

        cout << "Enter the element : ";
        cin >> val;
        if(front = -1){
            front = 0;
        }
        rear = rear + 1;
        queue[rear] = val;
        size++;
        return;
    }
    void dequeue()
    {
        if (front == -1 || front > rear)
        {
            cout << "The queue is empty!!";
        }
        else
        {
            front = front + 1;
        }
    }
    void display()
    {
        if (front == -1)
        {
            cout << "The queue is empty!";
            return;
        }
        for (int i = front; i < n; i++)
        {
            cout << queue[i] << "\t";
        }
    }
};

int main()
{
    Queue<double> *q = new Queue<double>;
    int ch;
    cout << "1) Insert element to queue" << endl;
    cout << "2) Delete element from queue" << endl;
    cout << "3) Display all the elements of queue" << endl;
    cout << "4) Read element from the queue" << endl;
    cout << "5) Exit" << endl;
    do
    {
        cout << "Enter your choice : " << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            q->enqueue();
            break;
        case 2:
            q->dequeue();
            break;
        case 3:
            q->display();
            break;
        case 5:
            cout << "Exited The Queue" << endl;
            break;
        default:
            cout << "Invalid Operation" << endl;
        }
    } while (ch > 0 && ch < 5);
    return 0;
}
#include <iostream>
using namespace std;

class Stack
{
    int *arr;
    int nextIndex;
    int capacity;

public:
    Stack()
    {
        capacity = 5;
        arr = new int[capacity];
        nextIndex = 0;
    }

    void push(int element)
    {
        if (nextIndex == capacity)
        {
            int *newArr = new int[capacity * 2];
            for (int i = 0; i < capacity; i++)
            {
                newArr[i] = arr[i];
            }
            delete []arr;
            arr = newArr;
            capacity = capacity * 2;
        }
        arr[nextIndex] = element;
        nextIndex++;
    }
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow" << endl;
            return;
        }
        nextIndex--;
    }
    int size()
    {
        return nextIndex;
    }

    bool isEmpty()
    {
        if (nextIndex == 0)
        {
            cout << "Stack Underflow";
            return true;
        }
        return false;
    }
    int top()
    {
        if (isEmpty())
        {
            cout << "stack is empty";
            return 0;
        }
        return arr[nextIndex - 1];
    }
};

int main()
{

    Stack *s = new Stack;
    s->push(10);
    s->push(20);
    s->push(30);
    s->push(40);
    s->push(50);
    s->push(60);
    s->push(70);

    // s->pop();
    // s->pop();
    // s->pop();
    cout << s->size() << endl;
    cout << "Top is " << s->top();
}

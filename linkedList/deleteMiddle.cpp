#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        this->data = d;
        next = NULL;
    }
};

Node *deleteMiddle(Node *head, int data)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->data == data)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    while (head->next != NULL)
    {
        Node *temp = head->next;
        if (head->next->data == data)
        {
            head->next = head->next->next;
            delete (temp);
        }
        head = head->next;
    }
}
void display(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << endl;
        head = head->next;
    }
}
int main()
{
    Node *n1 = new Node(5);
    Node *n2 = new Node(6);
    Node *n3 = new Node(7);
    Node *n4 = new Node(8);
    Node *n5 = new Node(9);
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n1 = deleteMiddle(n1, 5);
    display(n1);
    return 0;
}
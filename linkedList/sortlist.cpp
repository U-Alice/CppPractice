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

void display(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << endl;
        head = head->next;
    }
}

Node* midNode(Node* head){
    Node *fast = head;
    Node *slow = head;
    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

int main(){
    Node *n1 = new Node(5);
    Node *n2 = new Node(6);
    Node *n3 = new Node(7);
    Node *n4 = new Node(8);
    Node *n5 = new Node(9);
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    Node* mid = midNode(n1);
    cout << mid->data;
    return 0;
}
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

Node* deleteFirstNode(Node* head){
    if(head ==NULL)
        return NULL;
    Node *temp = head;
    head = head->next;
    delete temp; 
    
    return head;
}

    Node *deleteLastNode(Node* head){
        if(head ==NULL){
            return NULL;
        }
        if(head-> next ==NULL){
            delete head;
            return NULL;
        }
        Node *temp = head->next;
        while(temp->next->next != NULL){
            temp = temp->next;
        }
        Node *last = temp->next;
        delete(last);
        temp->next =NULL;
        return head;
    }
void display(Node* head){
    while(head != NULL){
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
    n1 = deleteLastNode(n1);

    display(n1);

}

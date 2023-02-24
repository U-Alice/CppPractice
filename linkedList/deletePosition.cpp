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

Node* deleteNode(Node* head, int i){
    if(i<=0){
        return head;
    }
    if(i == 1 && head){
        Node* newHead = head->next;
        head->next = NULL;
        delete head;
        return newHead;
    }
    Node* curr = head;
    int count =  1;
    while(count < i-1 && curr !=NULL){
        curr = curr->next;
        count++;
    } 
    if(curr && curr->next){
        Node *temp = curr->next;
        curr->next = curr->next->next;
        delete temp;
        return head;
    }
    return head;
}
void display(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << endl;
        head = head->next;
    }
}

int main(){
    Node *n1 = new Node(5);
    Node *n2 = new Node(7);
    Node *n3 = new Node(9);
    Node *n4 = new Node(15);
    Node *n5 = new Node(17);
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n1 = deleteNode(n1, 3);
    display(n1);
    return 0;
}
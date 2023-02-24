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

Node* deleteMiddle(Node *head,int data){
    while (head->next != NULL){
        Node *temp = head->next;
        if(head->next->data == data){
            head->next = head->next->next;
            delete(temp);
        }
    }
}

int main(){

    return 0;
}
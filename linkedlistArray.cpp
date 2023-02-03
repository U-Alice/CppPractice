#include <iostream>
using namespace std;


class Node{
    public:
    int data;
    Node *next;
};
void display(Node *node){
    while(node != NULL){
        cout << node->data;
        node = node->next;
    }
}
int main(){
    Node *first,*second,*third, *newNode;
    first = new Node();
    second = new Node();
    third = new Node();
    first->data=10;
    second->data =20;
    third->data = 30;
    first->next = second;
    newNode->next= second;
    first->next =  newNode;
    second->next = third;
    third->next = NULL;
    display(first);
}
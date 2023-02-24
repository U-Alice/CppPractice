#include <iostream>
using namespace std;


class Node{
    public:
    int data = 1;
    Node *node;

};


void printNode(Node* node){
    while(node != NULL){
     cout << node->data <<endl;
     node = node->node;
    }
};

int main(){
    Node* node1 = new Node();
    Node* node2 = new Node();
    node1->data = 2;
    node1->node = node2;
    node2->data = 3;
    printNode(node1);
}
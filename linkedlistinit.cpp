#include <iostream>

using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int d){
        this->data =d;
        this->next =  NULL;
    }
};
void display(Node *f){
    while(f != NULL){
        cout << f->data << endl;
        f = f->next;
    }
};
int main(){
    Node n1(5);
    Node n2 = Node(10);
    //Dynamic initialization
    Node *n3 = new Node(20);
    n2.next = n3;
    n1.next = &n2;
    n3->next = NULL;
    display(&n1);
    return 0;
}
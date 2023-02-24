#include <iostream>
using namespace std;

class Numbers
{
public:
    Numbers(int num)
    {
        this->data = num;
    }
    int data;
    Numbers *next;
};

void printNode(Numbers *node)
{
    while (node != NULL)
    {
        cout << node->data << endl;
        node = node->next;
    }
};

void insertHead(int data, Numbers **node)
{
    Numbers *newNumber = new Numbers(data);
    newNumber->next = *node;
    *node = newNumber;
}

Numbers* insertPosition(Numbers *head,int data, int i)
{
    if (i == 0)
    {
        Numbers *newNumber = new Numbers(data);
        newNumber->next = head;
        head = newNumber;
        return head;
    }
    Numbers *temp = head;
    int count = 1;
    while(count <= i-1 && head != NULL){
        head = head->next;
        count++;
    }
    if(head){
        Numbers *newNumber = new Numbers(data);
        newNumber->next = head->next;
        head->next = newNumber;
        return temp;
    }
    return temp;
}

int main()
{
    Numbers *n = new Numbers(1);
    Numbers *n1 = new Numbers(2);
    Numbers *n2 = new Numbers(4);

    n->next = n1;
    n1->next = n2;
    insertHead(0, &n);
    Numbers *head = insertPosition(n,-1,0);
    printNode(head);
    return 0;
}
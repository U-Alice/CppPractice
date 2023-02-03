#include <iostream>
using namespace std;
class Family{
    public:
    string name;
    Family *next;
};
void push(Family **head_ref, string newData){
    Family *new_node = new Family();
    new_node->name = newData;
    new_node->next = (*head_ref);
    *(head_ref) = new_node;
}
void insertAfter(Family* prevNode, string new_data ){
    Family *new_node = new Family();
    new_node->name =  new_data;
    new_node->next =  prevNode->next;
    prevNode-> next =  new_node;
}

void display(Family* node){
    while(node != NULL){
        cout <<  node->name <<  endl;
        node =  node->next;
    }
}

int main(){
    Family *member1 = new Family();
    Family *member2 = new Family();
    Family *member3 = new Family();

    member1->name = "Mother";
    member2->name = "First Born";
    member3->name = "Second born";
    member1-> next = member2;
    member2->next = member3;
    member3->next = NULL;
    cout << "** INSERT AT THE FRONT *****" << endl;
    push(&member1, "Father");
    insertAfter(member2, "Middle Born");
    display(member1);
    
}
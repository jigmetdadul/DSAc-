#include <iostream>
using namespace::std;

class linkedList;
class node{
    private:
    int data;
    node* next;
    private:
    friend class linkedList;
    node();
    node(int);
};

node::node()
:data(0), next(NULL){

}
node::node(int data)
:data(data), next(NULL){

}
class linkedList{
    private:
    node* head;
    int count;
    public:
    void reverseList();
    void insrtNode(int, int);
    void insrtNode(int);
    void showNode();
    linkedList();
    ~linkedList(){};
};
linkedList::linkedList()
:head(NULL), count(1)
{   
}
int main(){
    linkedList A;
    A.insrtNode(12);
    A.insrtNode(23);
    A.insrtNode(34);
    A.insrtNode(56);
    A.showNode();
    A.reverseList();
    A.showNode();
    return 0;
}

void linkedList::insrtNode(int data, int pos){
   node* newNode = new node(data);
   node* temp = head;
   while(count < pos){
    temp = temp->next;
    count++;
   }
   newNode->next = temp->next;
   temp->next = newNode;
   delete temp;
}

void linkedList::insrtNode(int data){
   node* newNode = new node(data);
   if(head == NULL){
    head = newNode;
    return;
   }
   node* temp = head;
   while(temp->next != NULL){
    temp = temp->next;
   }
   temp->next = newNode;
   temp = NULL;
   delete temp;
} 
void linkedList::showNode(){
    node* temp = head;
    while(temp ->next != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<temp->data;
    cout<<endl;
}

void linkedList::reverseList(){
    node* currentNode, *prevNode, *nextNode;
    prevNode = NULL;
    currentNode = nextNode = head;

    while(nextNode != NULL){
        nextNode = nextNode -> next;
        currentNode->next = prevNode;
        prevNode = currentNode;
        currentNode = nextNode;
    }
    head = prevNode;
}
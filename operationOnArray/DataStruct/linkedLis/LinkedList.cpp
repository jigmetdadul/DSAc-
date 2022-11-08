#include <iostream>
using namespace::std;

class linkedList;
class node{
    private:
    int data;
    node* next;
    public:
    friend class linkedList;
    node();
    node(int);
    ~node(){};
};
node::node()
:data(0), next(NULL)
{
}
node::node(int data)
:data(data), next(NULL)
{    
}

class linkedList{
    private:
    int count;
    node* head;
    public:
    void insrtNode(int, int);
    void insrtNode(int);
    void dltNode(int);
    void dltNode();
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
    A.insrtNode(90, 2);
    A.insrtNode(23,3); 
    A.showNode();
    A.dltNode();
    A.showNode();
    A.dltNode(1);
    A.showNode();
    return 0;
}

void linkedList::insrtNode(int data, int pos){
   node* newNode = new node(data);
   node* temp = head;
   count = 1;
   while(count < pos){
    temp = temp->next;
    count++;
   }
   newNode->next = temp->next;
   temp->next = newNode;
   //delete temp;
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

void linkedList::dltNode(){
    node* temp = head;
    node* prevNode = NULL;
    while(temp->next != NULL){
        prevNode = temp;
        temp = temp->next;
    }
    if(temp != head){
    prevNode->next = NULL;
    }
    else{
        head = NULL;
    }
}

void linkedList::dltNode(int pos){
    node* temp = head;
    node* prevNode = NULL;
    count = 1;
    if(pos == 1){
      head = head->next;
    }
    else{
    while(count < pos){
        prevNode = temp;
        temp = temp->next;
        count++;
    }
    prevNode->next = temp->next;
    } 
}
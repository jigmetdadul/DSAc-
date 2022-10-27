#include <iostream>
using namespace::std;

class linkedList;
class node{
    private:
    int data; 
    node* next;
    node* prev;
    public:
    friend class linkedList;
    node();
    node(int);
    ~node(){};
};
node::node()
:data(0), prev(NULL), next(NULL){

}
node::node(int data)
:data(data), next(NULL), prev(NULL){

}
class linkedList{
    private:
    node* head;
    node* tail;
    public:
    void insrtNode(int, int);
    void insrtNode(int);
    void dltNode();
    void showNode();
    linkedList();
    ~linkedList(){};
};
linkedList::linkedList()
:head(NULL){

}    



int main(){
    linkedList A;
    A.insrtNode(12);
    A.insrtNode(23);
    A.insrtNode(34);
    A.insrtNode(45);
    A.insrtNode(90,1);
    A.showNode();
    return 0;
}




void linkedList::insrtNode(int data){
    node* newNode = new node(data);
    if(head == NULL){
        head = tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void linkedList::insrtNode(int data, int pos){
    node* newNode = new node(data);
    node* temp = head;
    int count = 1;
    while(count < pos){
       temp = temp->next;
       count++;
    }
    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next = newNode;
    newNode->next->prev = newNode;
    
}
void linkedList::dltNode(){
    
}    
void linkedList::showNode(){
    node* temp = head;
    while(temp-> next != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<temp->data<<" ";
    cout<<endl;
    // while(temp->prev != NULL){
    //     cout<<temp->data<<" ";
    //     temp = temp -> prev;
    // }
    // cout<<temp->data<<" ";
    // cout<<endl;
}
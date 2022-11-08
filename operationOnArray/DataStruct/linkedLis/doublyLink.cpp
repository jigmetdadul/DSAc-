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
    void dltNode(int);
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
    cout<<"Inserting 12, 23, 34, 45 from the end: ";
    A.showNode();
    A.insrtNode(90,1);
    cout<<"Inseting 90 at the given position: ";
    A.showNode();
    A.dltNode();
    A.dltNode(1);
    cout<<"Deleting one integer from the end and the start: ";
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
void linkedList::dltNode(int pos){
    node* temp = head;
    int count = 1;
    if(pos == 1){
        head = temp -> next;
        head->prev = NULL;
        delete(temp);
        return;
    }
    while(count < pos){
        temp = temp->next;
        count++;
    }
    (temp->prev)->next = temp->next;
    (temp->next)->prev = temp->prev;
    delete temp;
    
}
void linkedList::dltNode(){
    node* temp = tail, *prev = tail->prev;
    if(head == tail){
        head = NULL;
        tail = NULL;
        return;
    }
        prev -> next = NULL;
        tail = prev;
        delete temp;
    
    
}    
void linkedList::showNode(){
    node* temp = head;
    if(head == NULL){
        cout<<"\t\tNo data to be shown!!"<<endl;
        return;
    }
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
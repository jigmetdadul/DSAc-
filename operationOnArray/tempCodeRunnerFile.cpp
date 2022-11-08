#include <iostream>
using namespace::std;
class linkedList;
class node{
    private:
    int studentId, rank;
    string name;

    node* next;
    public:
    friend class linkedList;
    node();
    node(int, int, string);
    ~node(){};
};
node::node()
:studentId(0), rank(0),name(""),  next(NULL)
{
}
node::node(int studentId, int rank, string name)
:studentId(studentId), rank(rank), name(name), next(NULL)
{    
}

class linkedList{
    private:
    int count;
    node* head;
    public:
    void insrtNode(int, int, string, int);
    void insrtNode(int, int, string);
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
    A.insrtNode(1, 123, "Jigmet");
    A.insrtNode(2, 456, "Prabal");
    A.insrtNode(3, 478, "Yash");
    A.insrtNode(4, 567, "Asish");
    A.showNode();
    A.dltNode();
    A.dltNode(1);
    A.showNode();
  
    return 0;
}

void linkedList::insrtNode(int studentId, int rank, string name, int pos){
   node* newNode = new node(studentId, rank, name);
   node* temp = head;
   while(count < pos){
    temp = temp->next;
    count++;
   }
   newNode->next = temp->next;
   temp->next = newNode;
   delete temp;
}

void linkedList::insrtNode(int studentId, int rank, string name){
   node* newNode = new node(studentId, rank, name);
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
        cout<<"Student ID: "<<temp->studentId<<" "<<endl;
        cout<<"Rank: "<<temp->rank<<" "<<endl;
        cout<<"Name: "<<temp->name<<" "<<endl;
        temp = temp->next;
    }
    cout<<"Student ID: "<<temp->studentId<<" "<<endl;
    cout<<"Rank: "<<temp->rank<<" "<<endl;
    cout<<"Name: "<<temp->name<<" "<<endl;
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
    cout<<"\n\tData Deleted from end"<<endl;
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
    cout<<"\n\tDeleted at position "<<pos<<"\n"<<endl;
}
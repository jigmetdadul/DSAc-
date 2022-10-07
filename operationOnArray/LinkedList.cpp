#include <iostream>
using namespace::std;
class linkedList;
class node{
    private:
    int data;
    node *next;
    public:
    friend class linkedList;
    node(){
        data = 0;
        next = NULL;
    }
    node(int data){
        this->data = data;
        this->next = NULL;
    }
    ~node(){};
};

class linkedList{
    private:
    int count ;
    node* head;
    public:
    void insertNde(int data);
    void dlt(int data);
    void display();
    linkedList(){
        head = NULL;
        count = 1;
    }
};
void linkedList::insertNde(int data){
    node* newNode = new node(data);
    if(head == NULL){
        head = newNode;
        return;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp -> next;
    }
    temp->next = newNode;
}

void linkedList::display(){
    node* temp = head;
    cout<<temp -> data<<" ";
    while(temp -> next != NULL){
        temp = temp -> next;
        cout<<temp -> data<<" ";
    }

}
void linkedList::dlt(int data){
    if(head -> data == data){
        if(head->next == NULL){
            head->data = 0;
        }
        else{
            head = head->next;
        }
        return;
    }
    node* temp = head;
    while(temp->next != NULL){
          count++;
          temp = temp -> next;
    }
    temp = head;
    node* temp1 = temp->next;
    for(int i = 0; i < count; i++){
        if(temp1->data == data){
            if(temp1->next == NULL){
                temp -> next = NULL;
                delete temp1;
            }
            else{
                temp->next = temp1 ->next;
                delete temp1;
            }
            return;
        }
        else{
            temp = temp -> next;
            temp1 = temp1 -> next;
        }
    }
}


int main(){
    linkedList first;
    first.insertNde(12);
    first.insertNde(23);
    first.insertNde(24);
    first.insertNde(26);
    first.insertNde(45);
    first.display();
    cout<<endl;
    first.dlt(26);
    first.display();
    return 0;
}
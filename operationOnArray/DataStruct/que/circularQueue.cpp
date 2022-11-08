#include <iostream>
using namespace::std;

class cirQ{
    private:
    int front, rear;
    int arr[5];
    public:
    void enqueue(int );
    void dequeue();
    void display();
    bool isEmpty();
    bool isFull();
    cirQ();
    ~cirQ(){};
};
cirQ::cirQ()
:front(0), rear(0){
    
}

int main(){
    cirQ first;
    first.enqueue(12);
    first.enqueue(45);
    first.enqueue(89);
    first.enqueue(50);
    first.dequeue();
    first.display();
    first.dequeue();
    first.dequeue();
    first.display();
    first.enqueue(45);
    first.enqueue(89);
    first.display();
    
    return 0;
    }

void cirQ::enqueue(int data){
    bool a = isFull();
    if(rear == -1 && front == -1){
        arr[front] = data;
        rear++;
        return; 
    }
    else if(a){
        cout.width(20);
        cout<<"Overflow!!"<<endl;
    }
    else{
        arr[rear] = data;
        rear = (rear + 1)%5;
    }
}

void cirQ::dequeue(){
    bool a = isEmpty();
    if(a){
        cout<<"Underflow!!"<<endl;
        return;
    }
    else if(rear == front){
        rear = front = -1;
    }
    else{
        arr[front] = 0;
        front = (front + 1) % 5; 
    }
}
bool cirQ::isEmpty(){
    if(front == -1 && rear == -1){
        return 1;
    }
    else{
        return 0;
    }
}

void cirQ::display(){
    bool a = isEmpty();
    if(a){
        cout<<"Empty!!"<<endl;      
    }
    else{
        int i = front;
        cout<<"Queue is: "<<endl;
        while(i != rear){
            cout<<arr[i]<<" ";
            i = (i + 1)%5;
        }
        cout<<endl;
    }
}

bool cirQ::isFull(){
    if((rear + 1)%5 == front ){
        return 1;
    }
    else{
        return 0;
    }
}
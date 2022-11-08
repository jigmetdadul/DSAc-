#include <iostream>
using namespace::std;

class Q{
    private:
    int front, rear;
    int arr[5];
    public:
    void enQ(int);
    void deQ();
    bool isFull();
    bool isEmpty();
    int retPeek();
    int retRear();
    void display();

    Q();
    ~Q(){}
};

Q::Q()
:rear(-1), front(-1){

}

int main(){
    Q first;
    first.enQ(34);
    first.enQ(45);
    first.deQ();
    first.display();
    return 0;
}

void Q::enQ(int data){

    if(rear == -1 && front == -1){
        rear = front = 0;
        arr[0] = data;
        return;
    }
    else if(rear == 4){
        cout<<"Overflow!!"<<endl;
    }
    else{
        rear++;
        arr[rear] = data;
    }

}

void Q::deQ(){
    if(front == -1 && rear == -1){
        cout<<"No items to delete";
        return;
    }
    else if(rear ==  4 && front == 4){
        arr[front] = 0;
        front = rear = -1;
        return;
    }
    else{
        arr[front] = 0;
        front++;
        return;
    }
}

void Q::display(){
    if(front == - 1 && rear == -1){
        cout.write("No elements to display\n", 30);
        return;
    }
    else{
    for(int i = front; i <= rear; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    }
}

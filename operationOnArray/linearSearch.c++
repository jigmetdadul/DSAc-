#include <iostream>

using namespace::std;
class linear{
    public:
    int search(int &val, int* arr, int &key);
     
};

int main(){
    int size = 4;
    int key = 0;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[size];
    cout<<" Enter the array values: ";
    for(int j = 0; j < size; j++)
    {
        cin>>arr[j];
    }
    cout<<"Enter the number whose position you wanna find: ";
    cin>>key;
    linear* first = new linear;
    int a = first -> search(size, arr, key);
    if(a != -1)
    {
       cout<<"The number is at the position "<< a<<endl;  
    }
    else
    {
        cout<<"Number not stored"<<endl;
    }
     
    return 0;
}

int linear::search(int &val, int* arr, int &key)
{
    for(int i = 0; i < key; i++){
        if(arr[i] == key)
        {
        return i;
        }
    }
    return -1;
}
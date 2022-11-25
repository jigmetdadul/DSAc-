#include <iostream>
using namespace::std;

void prnt(int*, int);

class insrt{
    private:
    int current, temp;

    public:
    void srt(int*, int);
    insrt():
    current(0), temp(0){

    };
    ~insrt(){

    };
};
int main(){
    insrt first;
    int arr[] = {3,4,2,1,5,7,6,9,8};
    int size = sizeof(arr)/ sizeof(int);
    cout<<"Before sorting the array is: ";
    prnt(arr, size);
    first.srt(arr, size);
    cout<<"After insetion sort the array will be: ";
    prnt(arr, size);

    return 0;
}

void insrt::srt(int* arr, int size){
    for(int i = 1; i < size; i++){
        current = i;
        temp = arr[i];
        while(current > 0 && temp < arr[current - 1]){
              arr[current] = arr[current - 1];
              current -= 1; 
        }
        arr[current] = temp;
    }
}
void prnt(int* arr, int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
#include <iostream>
using namespace::std;

class heapSrt{
    private:
    int* arr;
    int a;
    int parent;
    public:
    void insert(int, int);
    void swap(int, int);
    void prnt();
    heapSrt(int*);
    ~heapSrt(){};
};
heapSrt::heapSrt(int* arr)
:arr(arr), a(0), parent(0){

}
int main(){
    int arr[6] = {6,5,4,3,1};
    heapSrt first(arr);
    first.insert(6, 2);
    first.prnt();
    return 0 ;
}
void heapSrt::insert(int size, int value){
    a = size - 1;
    arr[a] = value;
    while(a>0){
        parent = (a + 1)/2;//E
        if(arr[parent] < arr[a]){
            swap(parent, a);
            a = parent;
        }
        else{
            return; 
        }
    }
}

void heapSrt::swap(int a, int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}
void heapSrt::prnt(){
    for(int i = 0; i < 6; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
#include <iostream>
using namespace::std;

class bub{
    private:
    int update;
    bool sorted;
    void swap(int*, int*);

    public:
    void srt(int, int*);
    void prnt(int* , int);
    bub();
    ~bub(){};
};
bub::bub()
:update(0), sorted(false){

}
int main(){
    bub first;
    int arr[] = {1,5,4,6,2,3};
    int N = sizeof(arr)/sizeof(int);
    first.prnt(arr, N);
    first.srt(N, arr);
    first.prnt(arr, N);
    return 0;
}

void bub::srt(int size, int* arr){
    update = size;
    while(!sorted){
        sorted = true;
        for(int i = 0; i < update; i++){
            if(arr[i] > arr[i + 1]){
                swap(&arr[i], &arr[i+1]);
                sorted = false;
            }
        }
        update -= 1;
    }
    
}

void bub::swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bub::prnt(int* arr, int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
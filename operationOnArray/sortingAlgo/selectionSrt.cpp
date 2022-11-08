#include <iostream>
using namespace::std;

class slct{
    private:
    int lowIndex, start;

    public:
    void srt(int*, int);
    void prnt(int*, int);
    void swap(int*, int*);
};
int main(){
    slct first;
    int arr[] = {6,5,4,3,2};
    int N = sizeof(arr)/sizeof(int);
    first.prnt(arr, N);
    first.srt(arr, N);
    first.prnt(arr, N);


    return 0;
}

void slct::srt(int* arr, int size){
    for(int i = 0; i < size; i++){
        lowIndex = i;
        for(int j = i + 1; j < size; j++){
            if(arr[i] > arr[j]){
                lowIndex = j;
            }
        }
        swap(&arr[i], &arr[lowIndex]);
    }
}

void slct::swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void slct::prnt(int* arr, int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
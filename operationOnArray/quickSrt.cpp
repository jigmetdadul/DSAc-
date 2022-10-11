//worst case: - n^2
//average :- nlogn
#include <iostream>
using namespace::std;

int partition(int*, int, int);
void quickSrt(int*, int, int);
void swap(int*, int*);

int main(){
    int arr[] = {7,5,42,44,13,5,1};
    int N = sizeof(arr)/sizeof(int);
    quickSrt(arr, 0, N-1);
    for(int o = 0; o < N; o++){
        cout<<arr[o]<<" ";
    }
    cout<<endl;
    
   
    return 0;
}

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void quickSrt(int* arr, int lb, int ub){
    if(lb < ub){
        int loc = partition(arr, lb, ub);
        quickSrt(arr, lb, loc - 1);
        quickSrt(arr, loc+1, ub);
    }
}

int partition(int* arr, int lb, int ub){
    int pivot = arr[lb];
    int start = lb;
    int end = ub;
    while(start < end){
    while(arr[start] <= pivot){
        start++;
    }
    while(arr[end] > pivot){
        end--;
    }
    if(start < end){
    swap(&arr[start], &arr[end]);
    }
    }
    swap(&arr[lb], &arr[end]);
    return end;
}


#include <iostream>
using namespace::std;

int partition(int*, int, int);
void quickSrt(int*, int, int);
void swap(int*, int*);
int main(){

    return 0;
}

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
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
        start--;
    }
    if(start < end){
    swap(&arr[start], &arr[end]);
    }
    }
    swap(&arr[lb], &arr[end]);
    return end;
}

void quickSrt(int* arr, int lb, int ub){
    if(lb < ub){
        int loc = partition(arr, lb, ub);
        quickSrt(arr, lb, loc - 1);
        quickSrt(arr, loc+1, ub);
    }
}
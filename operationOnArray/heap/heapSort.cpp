#include <iostream>
using namespace::std;

void swap(int*, int, int);
void heapify(int*, int, int);
void srt(int*, int);
void prnt(int*);
void printArray(int*, int);

int main(){
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int N = sizeof(arr) / sizeof(arr[0]);
 
    // Function call
    srt(arr, N);
 
    cout << "Sorted array is \n";
    printArray(arr, N);
    return 0;
}


void swap(int* arr, int a, int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}
void heapify(int* arr, int size, int i){
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;

    if(l<size && arr[largest] < arr[l]){
        largest = l;
    }
    if(r<size && arr[largest] < arr[r]){
        largest = r;
    }

    if(largest != i){
        swap(arr, largest, i);
        heapify(arr, size, largest);
    }
}
void srt(int* arr, int size){

    for(int i = size/2 - 1; i >= 0; i--){
        heapify(arr, size, i);
    }

    for(int i = size - 1; i >= 0; i--){
        swap(arr, 0, i);
        heapify(arr, i, 0);
    }
}
void printArray(int arr[], int N)
{
    for (int i = 0; i < N; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}


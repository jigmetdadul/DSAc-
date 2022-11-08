//time complexity in all cases is nlogn
#include <iostream>
using namespace::std;

void mergeSrt(int*, int, int);
void merge(int*, int, int, int);
int main(){
    int arr[] = {6,5,4,3,2,1};
    int N = sizeof(arr)/sizeof(int);
    mergeSrt(arr, 0, N-1);
    for(int o = 0; o < N; o++){
        cout<<arr[o]<<" ";
    }
    cout<<endl;
    return 0;
}

void mergeSrt(int* arr, int lb, int ub){
    if(lb<ub){
    int mid = (lb + ub)/2;
    mergeSrt(arr, lb, mid);
    mergeSrt(arr, mid + 1, ub);
    merge(arr, lb, mid, ub);
    }

}
void merge(int* arr, int lb, int mid, int ub){
    int i = lb;
    int j = mid + 1;
    int k = lb;
    int b[ub + 1];
    while(i <= mid && j <= ub){
        if(arr[i] < arr[j]){
            b[k] = arr[i];
            i++;
        }
        else{
            b[k] = arr[j];
            j++;
        }
        k++;
    }
    if(i > mid){
        while(j <= ub){
            b[k] = arr[j];
            j++;
        }
    }
    else{
        while(i <= mid){
            b[k] = arr[i];
            i++;
        }
        k++;
    }  
    for(int i = lb; i <= ub; i++){
        arr[i] = b[i];
    }  
}
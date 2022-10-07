#include <iostream>

using namespace::std;

class srt{
    public:
    int insert(int* , int); 
};

int main(){
    int size = 0;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the numbers: ";
    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    srt first;
    first.insert(arr, size);
    return 0;
}

int srt::insert(int* arr, int size)
{
    for(int i = 1; i< size; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while(arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
    cout<<" After sorting your array will be: "<<endl;
    for(int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}


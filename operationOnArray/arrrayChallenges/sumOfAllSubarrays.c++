#include <iostream>

using namespace::std;

class hah{
    private:
    int aa, bb;
    int *ptr;
    public:
    void print(int *);
    hah();
    hah(int *arr);
    hah(int *arr, int b , int a);
    ~hah(){
        cout<<"Destructor called!!\n";
    };
};
hah::hah(int *arr, int a, int b):ptr(arr), aa(a), bb(b){
    cout<<"One arg constructor called!!\n";

}
hah::hah(int *arr):hah{arr, 0, 0}{

}


int main(){
    int arr[5];
    int sum = 0;
    cout<<"Enter the five numbers: ";
    for(int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    //hah first{arr, 1 , 2}; 

    return 0;
}
void print(int *arr)
{   int sum = 0;
    for(int i = 0; i < 5; i++)
    {
        for(int j = i; j < 5; j++)
        {
            sum += arr[j];
            cout<<sum<<" ";
        }
    }
}

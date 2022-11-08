#include <iostream>
using namespace::std;

class bin{
    private:
    int a[8];
    public:
    int binary(int key, int low, int high);
    void storeArr();
}; 

void bin::storeArr(){
    cout<<"Enter 8 numbers: "<<endl;
    for(int i = 0; i < 8; i++)
    {
        cin>>a[i];
    }
}
int bin::binary(int key, int low, int high){
    while(low <= high)
    {
        int mid = low + (high - low)/2;
        cout<<mid<<endl;
        if(key < a[mid]){
            high = high -1;
        }
        else if(key > a[mid]){
            low = low + 1;
        }
        else{
            return mid;
        }
    }
    return -1;
}
int main(){
    int i;
    bin first;
    first.storeArr();
    cout<<"Enter the number you wanna find: ";
    cin>>i;
    int res = first.binary(i, 0, 8);
    if(res == -1){
        cout<<"Not found!!"<<endl;
    }
    else{
        cout<<"Number "<<i<<" found at "<<res<<endl;
    }
    return 0;
}
#include <iostream>

using namespace::std;

int main(){
    int arr[6];
    int mx = -1999999;
    cout<<"Enter the 6 values: ";
    for(int i = 0; i < 6; i++)
    {
        cin>>arr[i];
    }
    for(int j = 0; j < 6; j++)
    {
        mx = max(mx, arr[j]);
        cout<<mx<<" ";
    }
    return 0;

}
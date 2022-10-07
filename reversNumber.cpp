#include <iostream>
using namespace::std;

class nReverse{
    private:
    int k;
    public:
    void input();
    int rev();
};
int main(){
    nReverse* first = new nReverse;
    first ->input();
    int a = first -> rev();
    cout<<"The number is: "<<a<<endl;
    return 0;
}

void nReverse::input(){
    cout<<"Enter the number you wanna reverse: ";
    cin>>k;
}

int nReverse::rev(){

    int final = 0;
    while(k>0)
    {
        int digit = k%10; 
        final = final*10 + digit;
        k=k/10;
    }
    return final;
}
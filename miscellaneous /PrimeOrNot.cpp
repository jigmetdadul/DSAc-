#include <iostream>
#include <cmath>

using namespace::std;

class cPrime{
    private:
    int r, flag ;
    public:
    void input();
    int check();

};
int main(){
    cPrime first ;
    first.input();
    int flag = first.check();
    if(flag == 0)
    cout<<"It is a prime number!\n";
    else
    cout<<"It is not a prime number!\n";

    return 0;
}

void cPrime::input(){
    cout<<"Enter the number you wanna check: ";
    cin>>r;
}

int cPrime::check(){
    for(int i = 2; i <=sqrt(r); i++)
    {
        if(r%i == 0){
        cout<<"Not a prime number!!\n";
        flag = 1;
        break;
        }
        else
        flag = 0;
    }
    return flag;
}
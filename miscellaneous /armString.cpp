#include <iostream>
#include <cmath>

using namespace::std;

class arm{
    private:
    int k;
    public:
    int input();
    int check();
};
int main(){
    arm first;
    int k = first.input();
    int sum = first.check();
    if(sum == k)
    cout<<"Yes it's an armStrong number\n";
    else
    cout<<"No it's not an armStrong number\n";
    return 0;
}

int arm::input(){
    cout<<"Enter the number you wanna check: ";
    cin>>k;
    return k;
}

int arm::check(){
    int final = 0;
    int sum = 0;

    while(k>0){
        int digit = k%10;
        sum += pow(digit, 3);
        k = k/10;
    }

    return sum;
}
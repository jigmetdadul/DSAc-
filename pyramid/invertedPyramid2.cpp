#include <iostream>
using namespace::std;

class pyramid{
        public:
        int input();
        void print(int &co);
    };

int main(){
 
    pyramid* first = new pyramid;
    int co = first->input();
    first -> print(co);
    delete first;
    return 0;
}

int pyramid::input()
 {
    int co = 0;
    cout<<"Row and coloumn value: "<<endl;
    cin>>co;
    return co;
    
}

void pyramid::print(int &co)
{
    for(int i = 1; i <= co; i++)
    {
        for(int j = 1; j <= co; j++)
        {
            if(j<= co-i)
            cout<<"   ";
            else
            cout<<" * ";
        }
        cout<<endl;
    }
}
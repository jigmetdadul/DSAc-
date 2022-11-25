#include <iostream>
using namespace::std;

class bPattern{
    private:
    int r;

    public:
    int input();
    void print(int &k);
};


int main(){

    bPattern* first = new bPattern;
    int r = first -> input();
    first -> print(r); 
    return 0;
}

int bPattern::input()
{
    cout<<"Enter the number of columns and rows: ";
    cin>>r;
    return r;
}

void bPattern::print(int &k)
{
    for(int i = 1; i<= r; i++)
    {
        for(int j = 1; j<=i; j++)
        {
            cout<<"*";
        }
        int space = 2*r - 2*i;
        for(int j = 1; j<=space;j++)
        {
            cout<<" ";
        }
        for(int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = r; i >= 1; i--)
    {
        for(int j = 1; j<=i; j++)
        {
            cout<<"*";
        }
        int space = 2*r - 2*i;
        for(int j = 1; j<=space;j++)
        {
            cout<<" ";
        }
        for(int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
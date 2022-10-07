#include <iostream>
using namespace::std;

class fPyramid{
    private:
    int r;

    public:
    void input();
    void print(int &k);
};

int main(){
    
    int u = 0;
    fPyramid first;
    cout<<"Enter from which number you want to start the pyramid: ";
    cin>>u;
    fPyramid* second = new fPyramid;
    second -> input();
    second -> print(u);
    
    return 0;
}

void fPyramid::input()
{
    cout<<"Enter the rows and coloumns: ";
    cin>>r;
}

void fPyramid::print(int &k)
{
    for(int i = 1; i <= r; i++)
    {
        for(int j = 1; j <= r; j++)
        {
            if(i>=j)
            {cout<<" "<<k<<" ";
             k++;
            }
            else
            {cout<<" ";
            }
        }
        cout<<endl;
    }
}
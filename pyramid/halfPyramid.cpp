#include <iostream>
using namespace::std;
 
class hPyramid{
    public:
    int input();
    void print(int &r);
};
int main(){

    hPyramid* first = new hPyramid;
    int r = first ->input();
    first -> print(r);
    return 0;
}

int hPyramid::input(){

    int r = 0;
    cout<<"Enter the rows and coloumn: ";
    cin>>r;
    return r;
}
void hPyramid::print(int &r){
    for(int i = 1; i <= r; i++)
    {
        for(int j = 1; j <= r; j++)
        {
            if(i>=j)
            cout<<i;
            else
            cout<<" ";
        }
        cout<<endl;
    }
}
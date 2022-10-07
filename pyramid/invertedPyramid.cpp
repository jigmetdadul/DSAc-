#include <iostream>
using namespace::std;
void star(int &rows, int &column);

int main(){
    int rowPtr;
    int columnPtr;
    cout<<"How many stars in the column you want: "<<endl;
    cin>>columnPtr;
    cout<<"How many stars in the rows do you want: "<<endl;
    cin>>rowPtr;
    star(rowPtr, columnPtr);
    
    return 0;
}

void star(int &rows, int &column)
{
    for(int i = 1; i <=rows; i++)
    {
        for(int j = 1; j <=column; j++)
        {
            if(j<i)
            {
              cout<<" * ";
            }
            else
            {
              cout<<"  "; 
            }
        }
        cout<<endl;
    }
}
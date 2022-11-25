#include<iostream>
#include<fstream>
#include<cmath>

using namespace std;

int main()
{
    ifstream fin;
    fin.open("input.txt");  //open input.txt in read mode
    
    ofstream fout;
    fout.open("output.txt");//open output.txt in write mode
    
    int tc;
    fin >> tc;  //read number of test cases from file
    
    for(int n=1;n<=tc;n++)  //for tc number of times
    {
        int digits;
        fin >> digits;  //load digits from file
        
        int start=pow(10,digits-1); //find the least number with specified digits
        int end=pow(10,digits)-1;   //find the highest number with specified digits
        
        for(int i=start;i<=end;i++) //i from start to end
        {
            if(i%2!=0 && i%3==0 && i%9!=0)  //if odd and divisible by 3 but not 9
            {
                fout << i;  //write i to file
                break;      //exit from inner for loop
            }
        }
        fout << endl;   //move to new line
    }
    
    return 0;
}



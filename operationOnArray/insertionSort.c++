#include <iostream>
using namespace::std;

class insrt{
    private:
    int current, temp;

    public:
    void srt(int*, int);
    void prnt(int*, int);
};
int main(){

    return 0;
}

void insrt::srt(int* arr, int size){
    for(int i = 1; i < size; i++){
        current = i;
        temp = arr[i];
        while(current > 0 && temp < arr[current - 1]){
              arr[current] = arr[current - 1];
              current -= 1; 
        }

        arr[current] = temp;
    }
}
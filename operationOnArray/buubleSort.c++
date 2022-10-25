#include <iostream>
using namespace::std;

class Bub{
    private:
    int *arr, N;
    bool srted;
    public:
    void srt();
    void prnt();
    Bub();
    Bub(int*, int);
    ~Bub(){};

};
Bub::Bub()
:arr(NULL), srted(false){

}
Bub::Bub(int* arr, int size)
:arr(arr), N(size), srted(false){

}
int main(){
    int arr[] = {4,35,2,6,1,8,3};
    int size = sizeof(arr)/sizeof(int);
    Bub first(arr, size);
    first.prnt();
    first.srt();
    first.prnt();
    return 0;
}

void Bub::srt(){
    int update = N;
    while(!srted){
        srted = true;
        for(int i = 0; i < update - 1; i++){
            if(arr[i] > arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                srted = false;
            }
        }
        --update;
    } 
}

void Bub::prnt(){
    for(int i = 0; i < N; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
#include <iostream>
using namespace::std;

class srt{
    private:
    int size, *arr;
    public:
    void select();
    void print();
    srt(int find, int *array);
    ~srt(){
        cout<<"Destructor called!!"<<endl;
    };
};
srt::srt(int sizeG, int *array)
:size(sizeG), arr(array){
    cout<<"Constructor called"<<endl;
}
void srt::select(){
    for(int i = 0; i < size; i++){
        for(int j = j+1; j < size; j++){
            if(arr[i] > arr[j])
            {
               int temp = arr[i];
               arr[i] = arr[j];
               arr[j] = arr[i];
            }
        }
    }
}
void srt::print(){
    cout<<"The sorted array will be: "<<endl;
    for(int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int sizeG;
    cout<<"Enter the size of the array: "<<endl;
    cin>>sizeG;
    int array[sizeG];
    cout<<"Enter the numbers: "<<endl;
    for(int i = 0; i < sizeG; i++)
    {
        cin>>array[i];
    }
    srt first(sizeG, array);
    first.select();
    first.print();
    return 0;
}
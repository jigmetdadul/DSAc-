#include <iostream>

class bub{
    private:
    int arr[10] = {9,8,7,6,5,4,3,2,1,0};
    int update, temp;
    bool cond;

    public:
    void prnt();
    int* bubble();
    bub();
    ~bub();
};
bub::bub():update(9), temp(0), cond(false){
    std::cout<<"Constructor initialised for no arg"<<std::endl;
};
bub::~bub(){
    std::cout<<"\nDestructor called!!"<<std::endl;
}
int main(){
    bub* first = new bub;
    std::cout<<"Before sorting: "<<std::endl;
    first->prnt();
    first->bubble();
    std::cout<<"\n\nArray after bubble sort is: "<<std::endl;
    first->prnt();
    delete first;
    return 0;
}

void bub::prnt(){
    for(int i = 0; i < 10; i++){
        std::cout<<arr[i]<<" ";
    }
}
int* bub::bubble(){
    while(!cond){
        cond = true;
        for(int i = 0; i < update; i++){
            if(arr[i] > arr[i + 1]){
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                cond = false;
            }
        }
        update -= 1;
    }
    return arr;
}
#include <stdio.h>
int foo(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    return a;
}

int main()
{
    int a=10,b=20;
    printf("Before swapping,a=%d  b=%d\n",a,b);
    
    printf("After swapping,a=%d  b=%d\n",foo(a,b),foo(b,a));
    

    return 0;
}
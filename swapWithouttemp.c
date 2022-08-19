#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a=10,b=15;

    a=a+b;
    b=a-b;
    a=a-b;

    

    printf("The value of a=%d ",a);
    printf("The value of b=%d ",b);

    return 0;
}

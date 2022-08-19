#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a=0,b=1,c=0,num,d;

    printf("Enter the num=");
    scanf("%d",&num);

    printf("First Term a=%d\n",a);
    printf("Second Term b=%d\n",b);

     for (int i = num; i < 5; i++)
    {
        
    c=a+b;
    printf("c=%d\n",c);

    a=b;
    b=c;
    

    }
    

    
    
    return 0;
}

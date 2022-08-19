#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num,count=0;
    printf("Enter the num=");
    scanf("%d",&num);

    while (num!=0)
    {
        num=num/10;
        count++;

        
    }
    printf("Count number of digits=%d",count); 
    

    return 0;
}

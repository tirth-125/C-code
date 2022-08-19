#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num,remainder,rev=0;
    printf("enter the num = ");
    scanf("%d",&num);

    while (num!=0)
    {
        remainder = num%10;
        rev = rev*10 + remainder;
        num/=10; //(num=num/10)
        
    }
    printf("Reverse number=%d",rev);
    
    
    
    
        
        
    
    
    

    
   
    return 0;
}

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int base,exp,result=1;

    printf("Enter the base = ");
    scanf("%d",&base);

    printf("\nEnter the exp = ");
    scanf("%d",&exp);

    for (int  i = 1; i <= exp; i++)
    {
            result=result*base;
    }
    printf("\n %d^%d=%d",base,exp,result);
    

    
    return 0;
}

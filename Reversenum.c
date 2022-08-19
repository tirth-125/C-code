#include<stdio.h>
int main(int argc, char const *argv[])
{   int num;
    
    printf("Enter the num=");
    scanf("%d",&num);


    for (int i = 0; i <= num; i++)
    {
        printf("%d\n",i); 
    }


    printf("Reverse numbers=");

    for (int j = num; j>=0; j--)
    {
        printf("%d\n",j);
    }
    
    return 0;
}

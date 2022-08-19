#include<stdio.h>
int main(int argc, char const *argv[])
{   
    int num,flag;

    flag=1;//(False)
    
    for (int j = 2; j <= num; j++)
    {
        printf("Enter the num = ");
        scanf("%d\n",&num);

        
    }
    
    

    for (int i = 2; i < num; i++)
    {
        if (num%i==0)
        {
            
            flag=0;   
           
        }
        
    }
    
    if (flag==1)
    {
        printf("number %d is prime\n");
    }
    else
     printf("num %d is not prime\n");
    
    


    return 0;
}

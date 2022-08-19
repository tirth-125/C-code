#include<stdio.h>

int main(int argc, char const *argv[])
{   

    int min,max,num,product=1;
    printf("Enter the number min=");
    scanf("%d",&min);


    printf("Enter the number max=");
    scanf("%d",&max);

    for (int j = min; j <= max; j++)
    {
        product=1; //(doubted)
        for (int i = 1; i <=j; i++) 
        
            product=product*i;
            printf("%d\n",product);
        
        
        
    }
    
    

    return 0;
}

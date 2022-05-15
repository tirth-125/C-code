#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    
    printf("Enter the num:");
    scanf("%d",&num);
    
    if(num%2==0){
        printf("%d is Even",num);
    }
    else{
        printf("%d is odd",num);
    }
    

    return 0;
}

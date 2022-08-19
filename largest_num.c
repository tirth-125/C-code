#include <stdio.h>

int main() {
    int num1,num2,num3;
    
    printf("Enter the num1:");
    scanf("%d",&num1);
    
    printf("Enter the num2:");
    scanf("%d",&num2);
    
    printf("Enter the num3:");
    scanf("%d",&num3);
    
    
    if(num1>num2 && num1>num3){
        printf("%d is largest",num1);
    }
    else if(num2>num3 && num2>num1)
    {
        printf("%d is largest",num2);
    }
    else if (num1==num2==num3) 
    {
        printf("All num are same");
    }
    
    else{
        printf("%d is largest",num3);
    }
    
    return 0;
}

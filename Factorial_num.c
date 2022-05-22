#include <stdio.h>

int main() {
    int product,num;
    
    printf("Enter the num:");
    scanf("%d",&num);
    
    for(int i=1;i<=10;i++){
       product = num*i;
       printf("%d*%d=%d\n",num,i,product);
    }
    
    
    return 0;
}

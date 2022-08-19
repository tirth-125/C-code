
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,Product=1;

    printf("Enter the num a=");
    scanf("%d",&a);

    for (int j = a; j <=10; j++)
    {
        
       for (int i = 1; i <=10 ; i++)
    {
        Product=a*i;
        printf("%d*%d=%d\n",a,i,Product);
        
    }
    a++;

    }
    return 0;
}

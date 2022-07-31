#include<stdio.h>
int main(int argc, char const *argv[])
{
    int size;
    printf("Enter the size= ");
    scanf("%d",&size);

    int a[size];

    for (int i = 0; i < size; i++)
    {
        
        scanf("%d",&a[i]);
    }

    for (int i = 0; i < size; i++)
    {
        printf("The Element %d is %d\n ",i,a[i]);
    }
    

    
    return 0;
}

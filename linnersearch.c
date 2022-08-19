#include<stdio.h>
#include<stdbool.h> 
int main(int argc, char const *argv[])
{
    int a[6] = {10,20,30,40,50,60},key=30;
    bool flag=0;
    
    for (int i = 0; i < 6; i++)
    {
        if (key==a[i])
        {
          flag=1;
          break;//(space complextivity) 
        }
        
    }
    if (flag==0)
    {
      printf("key not found\n");

    }
    else{
      printf("Key found");
    }
    
        
    return 0;
}

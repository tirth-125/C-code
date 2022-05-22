#include<stdio.h>
int main(int argc, char const *argv[])
{
    
   char ch;
   
   printf("Enter the ch:");
   scanf("%c",&ch);
   
   if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
       printf("%c is vowel",ch);
   }
   else{
       printf("%c is constant",ch);
   }
   
   
    
    

    return 0;
}

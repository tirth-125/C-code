#include <stdio.h>

int main() {
    int year;
    
    printf("");
    
    if((year/4)){
        printf("The year is leap year");
    }
    else if((year/400)){
      printf("The year is leap year");
    }
    else{
        printf("The year is not leap");
    }
    return 0;
}

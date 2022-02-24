#include <stdio.h>

// check to see if a year is leap year or not 

int main() {

    int year;

    printf("Enter year:");
    scanf("%d", &year);

    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    {
        printf("The year is a leapyear\n");
    }
    else{
        printf("The year is not leapyear\n");
    }
    
    return 0;
}
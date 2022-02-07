#include <stdio.h>

// a C program to check a given integer and return true if it is within 10 of 100 or 200.

int main() {

    int a;

    printf("Enter integer: ");
    scanf("%d", &a);

    if ((a - 100) <= 10 || (a - 200) <= 10) 
        return 1;
    else
        return 0;
}
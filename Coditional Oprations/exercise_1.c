//  Write a C program to accept two integers and check whether they are equal or not.
#include <stdio.h>

int main()
{

    int a, b;
    printf("Enter two integers seprated by comma : ");
    scanf("%d,%d", &a, &b);

    if (a == b)
    {
        printf("Both integers are equal.\n");
    } else
    {
        printf("Integers are not Equal.\n");
    }
    

    return 0;
}
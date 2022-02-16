#include <stdio.h>

int main()
{
    char str[50];

    printf("Enter your complete name:\n\n\n ");

    gets(str); // scan string with gets function

    printf("your name %s\n\n", str); //string print

    return 0;
}
//  Write a C program to check whether a character is an alphabet, digit or special character
#include <stdio.h>

int main() {

    char ch;
    printf("Enter a charecter: ");
    scanf("%c", &ch);

    if (ch >= '0' && ch <= '9')
    {
        printf("Charecter is a Digit\n");
    } else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("Charecter is an alphabet\n");
    }else
    {
        printf("Charecter is a special charecter\n");
    }
    
    return 0;
}
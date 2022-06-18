// Write a C program to calculate the factorial of a given number.
#include <stdio.h>

int main() {

    long factorial= 1;
    int num = 1,n;

    printf("Input the Number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        factorial *= num;
        num++;
    }
    
    printf("Factorial of %d is : %ld ",n,factorial);
    return 0;
}
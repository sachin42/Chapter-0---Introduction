// Write a C program to check whether a given number is positive or negative
#include <stdio.h>

int main() {

    int a;
    printf("Enter a integer: ");
    scanf("%d", &a);

    a > 0 ? printf("Integer is positive.\n"): printf("integer is negative.\n");

    return 0;
}
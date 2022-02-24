// Write a C program to check whether a given number is even or odd
#include <stdio.h>

int main() {

    int a;

    printf("Enter a integer value: ");
    scanf("%d", &a);

    a % 2 == 0 ? printf("Integer is even.\n"): printf("integer is odd.\n");

    return 0;
}
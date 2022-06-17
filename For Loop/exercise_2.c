// Write a C program to find the sum of first 10 natural number
#include <stdio.h>

int main() {

    int num= 1 ,i, sum= 0;

    for ( i = 0; i < 10; i++)
    {
        sum += num;
        num++;
    }
    
    printf("%d ", sum);
    return 0;
}
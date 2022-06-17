// Write a program in C to display the first 10 natural numbers.
#include <stdio.h>

int main() {

    int num= 1, i;

    for ( i = 0; i < 10; i++)
    {
        printf("%d ", num);
        num++;
    }
    

    return 0;
}
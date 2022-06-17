//  Write a program in C to display n terms of natural number and their sum
#include <stdio.h>

int main() {

    int num= 1 ,i, sum= 0 ,n;

    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The first %d natural number is :\n", n);
    for ( i = 0; i < n; i++)
    {
        printf("%d ", num);
        sum += num;
        num++;
    }
    
    printf("\nThe Sum of Natural Number upto %d terms : %d ", n,sum);
    return 0;
}
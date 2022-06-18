// Write a program in C to display the n terms of odd natural number and their sum
#include <stdio.h>

int main() {

    int i,sum=0,n,num = 1;

    printf("Input number of terms : ");
    scanf("%d", &n);
    printf("The odd numbers are : ");
    for ( i = 0; i < n; i++)
    {
        printf("%d ", num);
        sum += num;
        num++;
        num++;
    }
    printf("\nThe Sum of odd Natural Number upto %d terms : %d \n", n,sum);

    return 0;
}
// Write a program in C to display the n terms of even natural number and their sum
#include <stdio.h>

int main() {

    int n,i,sum = 0,num = 2;

    printf("Input number of terms: ");
    scanf("%d", &n);

    for ( i = 0; i < n; i++)
    {
        printf("The even Numbers are: %d ",num);
        sum += num;
        num++;
        num++;
    }
    printf("\nThe Sum of even Natural Numbers upto %d terms: %d \n",n,sum);

    return 0;
}
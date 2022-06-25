// Write a program in C to display the n terms of square natural number and their sum
#include <stdio.h>

int main() {

    int i,n;
    long sum =0;
    printf("Enter the value of terms: ");
    scanf("%d", &n);
    printf("The square natural upto %d terms are : ",n);
    for ( i = 1; i <= n; i++)
    {
        printf("%d ",i*i);
        sum+=i*i;
    }
    printf("\nThe Sum of Square Natural Number upto %d terms: %ld.\n",n,sum);

    return 0;
}
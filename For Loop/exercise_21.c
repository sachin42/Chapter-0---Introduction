//  Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...
#include <stdio.h>

int main()
{

    long int i, n, t = 9, sum = 0;

    printf("Input the numbers of terms: ");
    scanf("%ld", &n);

    for (i = 0; i < n; i++)
    {
        sum += t;
        printf("%ld ", t);
        t = t * 10 + 9;
    }
    printf("\nThe sum of the series = %ld ", sum);

    return 0;
}
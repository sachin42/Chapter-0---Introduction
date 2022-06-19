// Write a program in C to display the n terms of harmonic series and their sum
#include <stdio.h>

int main()
{

    int n, i, num = 1;
    float sum = 0.0;

    printf("Input the numbers of terms: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("1/%d + ", num);
        sum = sum + 1 / (float)num;
        num++;
    }
    printf("\nSum of series upto %d terms : %.2f", n, sum);

    return 0;
}
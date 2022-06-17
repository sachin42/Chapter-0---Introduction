// Write a program in C to read 10 numbers from keyboard and find their sum and average
#include <stdio.h>

int main() {

    int  i;
    float avarage,sum=0.0,num;

    for ( i = 1; i <= 10; i++)
    {
        printf("Enter number (%d):", i);
        scanf("%f", &num);
        sum += num;
    }
    printf("Sum of 10 numbers is: %.1f\n", sum);
    avarage = sum / 10;
    printf("The Average of 10 numbers is: %.2f\n", avarage);

    return 0;
}
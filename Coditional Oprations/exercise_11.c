// Calculate the root of a Quadratic Equation. to run this file (gcc exercise_11.c -o test -lm).
#include <stdio.h>
#include <math.h>

int main()
{

    int a, b, c, d, e;
    float x1, x2;

    printf("Enter the values of a,b,c: ");
    scanf("%d,%d,%d", &a, &b, &c);

    d = b * b - 4 * a * c;
    e = sqrt(d);
    if (d == 0)
    {
        printf("Both roots are equal and same.\n");
        x1 = -b / 2.0 * a;
        x2 = x1;
        printf("First  Root Root1= %f\n", x1);
        printf("Second Root Root2= %f\n", x2);
    }
    else if (d > 0)
    {
        printf("Both roots are equal and different.\n");
        x1 = (-b + e) / (2 * a);
        x2 = (-b - e) / (2 * a);
        printf("First  Root Root1= %f\n", x1);
        printf("Second Root root2= %f\n", x2);
    }
    else
    {
        printf("Root are imeainary;\nNo Solution. \n");
    }

    return 0;
}
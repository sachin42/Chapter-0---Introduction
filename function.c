#include <stdio.h>

double getperimeter(double, double);

int main()
{

    double lenth, width, perimeter;

    puts("Enter the lenth: ");
    scanf("%lf", &lenth);

    puts("Enter the width: ");
    scanf("%lf", &width);

    perimeter = getperimeter(lenth, width);

    printf("%.2lf", perimeter);

    return 0;
}

double getperimeter(double lenth, double width)
{

    return 2 * (lenth + width);
}

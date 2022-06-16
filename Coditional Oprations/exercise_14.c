// Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene
#include <stdio.h>

int main() {

    int side1,side2,side3;
    printf("Enter three sides of a triange: ");
    scanf("%d%d%d", &side1,&side2,&side3);

    if (side1 == side2 || side2 == side3)
    {
        printf("Triangle is Equilateral\n");
    } else if (side1 == side2 || side2 == side3 || side3 == side1)
    {
        printf("Triangle is isosceles\n");
    } else
    {
        printf("Triangle is scalene\n");
    }
    
    return 0;
}
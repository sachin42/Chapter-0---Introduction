// Write a C program to check whether a triangle can be formed by the given value for the angles
#include <stdio.h>

int main() {

    int ang1,ang2,ang3;

    printf("Enter three angles in degrees: ");
    scanf("%d,%d,%d", &ang1,&ang2,&ang3);

    if (ang1+ang2+ang3 == 180)
    {
        printf("A trinagle can be formed with given three angles");
    } else
    {
        printf("A trinagle can not be formed with given three angles");
    }
    
    return 0;
}
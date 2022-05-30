#include <stdio.h>

int main() {

    int num1, num2, num3;

    printf("Enter first number:");
    scanf("%d", &num1);
    printf("Enter second number:");
    scanf("%d", &num2);
    printf("Enter third number:");
    scanf("%d", &num3);

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("First number is largest of all three");
        }
        
    } else if (num2 > num3)
    {
        printf(" Second number is largest of all three");
    } else
    {
        printf(" Third number is largest of all three");
    }
    
    return 0;
}
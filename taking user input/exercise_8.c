#include <stdio.h>

int main() {

    int a, b, c;

    printf("Enter number seprated by comma: ");
    scanf("%d,%d,%d", &a,&b,&c);

    printf("Sum of numbers is %d.\n", a + b + c);

    return 0;
}
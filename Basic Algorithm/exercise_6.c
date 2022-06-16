#include <stdio.h>

// check to see if two integers in range of 100 -200

int main() {

    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a,&b);

    if (a > 100 && a < 200)
    {
        printf("First number %d is in range of 100 - 200 \n", a);
    } else {
        printf("First number %d is not in range of 100 - 200 \n", a);
    }
    
    if (b > 100 && b < 200)
    {
        printf("second number %d is in range of 100 - 200 \n", b);
    } else {
        printf("second number %d is not in range of 100 - 200 \n", b);
    }
    return 0;
}
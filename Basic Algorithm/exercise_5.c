#include <stdio.h>

// check to see if a given positive number is multiple of 3 or multiple of 7

int main() {

    int a;
    printf("Enter The Number: ");
    scanf("%d", &a);

    if (a % 3 == 0)
    {
        printf("Number %d is Multiple of 3\n", a);
    } else if (a % 7 == 0)
    {
        printf("Number %d is multiple of 7\n", a);
    } else
    {
        printf("Number %d is not a multiple of 3 or 7\n", a);
    }
        

    return 0;
}

// Write a program in C to display the multiplication table vertically from 1 to n
#include <stdio.h>

int main() {

    int i, j ,n, num;

    printf("Enter the for tables foe 1 to n: ");
    scanf("%d", &n);
    num = 1;
    for ( j = 1; j <= n; j++)
    {
        for ( i = 1; i <= 10; i++)
        {
            printf("%d X %d = %d\n", num, i, num * i);
        }
        printf("\n\n");
        num++;
    }

    return 0;
}
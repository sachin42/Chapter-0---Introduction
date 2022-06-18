// Write a program in C to display the pattern like right angle triangle with a number
#include <stdio.h>

int main() {

    int rows, i, j;
    printf("Enter Number of rows: ");
    scanf("%d", &rows);

    for ( i = 1; i <= rows; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    
    return 0;
}
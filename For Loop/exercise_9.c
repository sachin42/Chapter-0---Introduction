// Write a program in C to display the pattern like right angle triangle using an asterisk
#include <stdio.h>

int main() {

    int rows , i, j;

    printf("Enter numbers of Rows: ");
    scanf("%d", &rows);

    for ( i = 1; i <= rows; i++)
    {
        for ( j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    

    return 0;
}
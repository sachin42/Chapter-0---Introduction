// Write a program in C to make such a pattern like right angle triangle with number increased by 1.
#include <stdio.h>

int main() {

    int rows, i, j, num = 1;
    printf("Enter Number of rows: ");
    scanf("%d", &rows);

    for ( i = 1; i <= rows; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
    
    return 0;
}
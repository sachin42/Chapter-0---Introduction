#include <stdio.h>

int main() {

    int arr[3][5]= {            // 2D array
                   { 93, 32, 35, 12, 11},
                   { 34, 29, 87, 11, 12},
                   { 91, 45, 56, 67, 89}
                };
    for (int r = 0; r < 3; r++)
    {
            for (int c = 0; c < 5; c++)
            {
                printf("%d ", arr[r][c]);
            }
            printf("\n");
    }
    
    return 0;
}
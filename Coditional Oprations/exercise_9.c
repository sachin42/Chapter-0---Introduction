#include <stdio.h>

// take two inputs as coordinate point (x, y) and determine the position of point in quadrant

int main() {

    int x, y;

    printf("Enter the values of x and y seperated by a comma: ");
    scanf("%d,%d", &x,&y);

    if (x > 0 && y >0)
    {
        printf("Coordinates (%d, %d) are lies in First Quadrant", x,y);
    } else if (x < 0 && y > 0)
    {
        printf("Coordinates (%d, %d) are lies in Second Quadrant", x,y);
    } else if (x < 0 && y < 0)
    {
        printf("Coordinates (%d, %d) are lies in Third Quadrant", x,y);
    } else if (x > 0 && y < 0)
    {
        printf("Coordinates (%d, %d) are lies in Fourth Quadrant", x,y);
    } else
    {
        printf("Coordinates (%d, %d) are lies at origin of Quadrant", x,y);
    }
    
    return 0;
}
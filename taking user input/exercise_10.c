#include <stdio.h>

/* third angle of triangle if two angles are given 
180 - sum of two angles */

int main() {

    int a, b;

    printf("Enter two angles of tringle seprated by comma: ");
    scanf("%d,%d", &a, &b);

    printf("Third angle of Triangle is %d.\n", 180 - (a + b));

    return 0;
}
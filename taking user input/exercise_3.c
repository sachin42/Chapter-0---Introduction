#include <stdio.h>

int main() {

    int lenth, width, perimeter;
    printf("Enter lenth of restangle:");
    scanf("%d", &lenth);

    printf("Enter width of rectangle");
    scanf("%d", &width);

    perimeter = 2 * (lenth + width);

    printf("Pewrimeter of Rectangle is %d\n", perimeter);

    return 0;
}
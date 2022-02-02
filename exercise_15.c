#include <stdio.h>

/* program for calculate volume of sphere
formula for volume of sphere is (4 * 3.14 * radius * radius * radius) / 3 */

int main() {

    float radius, volume;
    const float pi = 3.14;

    printf("Enter radius of sphere: ");
    scanf("%f", &radius);

    volume = (4 * pi * radius * radius * radius) / 3;

    printf("Volume of sphere is %.2f\n", volume);

    return 0;
}
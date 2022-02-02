#include <stdio.h>

// formula for km/hr to miles/hr is Km/hr * 0.6213712

int main() {

    int speed;
    printf("Enter speed in Km/hr:");
    scanf("%d", &speed);

    printf("Speed in Mile/hr is %.2f\n", speed * 0.6213712);
    return 0;
}
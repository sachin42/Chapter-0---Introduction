#include <stdio.h>

//hour and minute input
// minute as output

int main() {

    int hours, minutes;

    printf("Enter hours: ");
    scanf("%d", &hours);

    printf("Enter minutes:");
    scanf("%d", &minutes);

    printf("Total minutes %d\n", minutes + (hours * 60    ));

    return 0;
}
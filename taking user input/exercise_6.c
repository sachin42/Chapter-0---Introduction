#include <stdio.h>

// minutes as input
// hours  and minuts as output

int main() {

    int hours, minutes, input;

    printf("Enter minutes:");
    scanf("%d", &input);

    hours = input / 60;
    minutes = input % 60;

    printf("entered minutes is %d hours and %d minutes\n", hours, minutes);

    return 0;
}
// Write a program in C to read any day number in integer and display day name in the word. 
#include <stdio.h>

int main() {

    int day;
    printf("Enter the day of week(1-7): ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Monday.\n");
        break;
    case 2:
        printf("Tuesday.\n");
        break;
    case 3:
        printf("Wednesday.\n");
        break;
    case 4:
        printf("Thursday.\n");
        break;
    case 5:
        printf("Friday.\n");
        break;
    case 6:
        printf("saturday.\n");
        break;
    case 7:
        printf("sunday.\n");
        break;
    
    default:
        printf("Invalid input. \nPlease try again ....\n");
        break;
    }

    return 0;
}
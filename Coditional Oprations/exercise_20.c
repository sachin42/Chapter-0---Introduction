// Write a program in C to accept a grade and declare the equivalent description 
#include <stdio.h>

int main() {

    char grade = 'x';
    printf("Enter the Grade: ");
    scanf("%c", &grade);

    system ("clear");
    printf("Your Grade is '%c'.\n", grade);

    switch (grade)
    {
    case 'E':
        printf("Excellent.\n");
        break;
    case 'V':
        printf("Very Good.\n");
        break;
    case 'G':
        printf("Good.\n");
        break;
    case 'A':
        printf("Avarage.\n");
        break;
    case 'F':
        printf("Fail.\n");
        break;
    default:
        printf("Invalid Input.\n");
        break;
    }

    return 0;
}
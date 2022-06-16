// Write a C program to read temperature in centigrade and display a suitable message according to temperature state below
#include <stdio.h>

int main()
{

    int temp;
    printf("Enter the Temperature in Centigrade:");
    scanf("%d", &temp);

    if (temp < 0)
    {
        printf("Freezing Weather\n");
    }
    else if (temp < 10)
    {
        printf("Very Cold Weather\n");
    }
    else if (temp < 20)
    {
        printf("Cold Weather\n");
    }
    else if (temp < 30)
    {
        printf("Normal Weather\n");
    }
    else if (temp < 40)
    {
        printf("It's hot\n");
    }
    else
    {
        printf("It's very Hoit\n");
    }

    return 0;
}
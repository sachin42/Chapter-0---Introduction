// Write a program in C to store elements in an array and print it.
#include <stdio.h>

int main() {

    int array[10],i;
    printf("Input 10 elements in the array :\n");

    for ( i = 0; i < 10; i++)
    {
        printf("Element %d:",i);
        scanf("%d", &array[i]);
    }
    printf("\nElements in array are: ");
    for ( i = 0; i < 10; i++)
    {
        printf("%d ",array[i]);
    }

    return 0;
}
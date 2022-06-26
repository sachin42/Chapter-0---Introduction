// Write a program in C to find the sum of all elements of the array.
#include <stdio.h>

int main() {

    int i,n;
    long sum = 0;
    printf("Input the number of elements to store in the array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Input %d number of elements in the array :\n",n);
    for ( i = 0; i < n; i++)
    {
        printf("Element - %d = ",i);
        scanf("%d", &arr[i]);
    }
    for ( i = 0; i < n; i++)
    {
        sum+=arr[i];
    }

    printf("\nSum of all the elements stored in the array: %ld.\n",sum);
    

    return 0;
}
// Write a program in C to copy the elements of one array into another array
#include <stdio.h>

int main() {

    int i,n;
    printf("Input the number of elements to store in the array : ");
    scanf("%d", &n);
    int arr[n];
    int arr1[n];
    printf("Input %d number of elements in the array :\n",n);
    for ( i = 0; i < n; i++)
    {
        printf("Element - %d = ",i);
        scanf("%d", &arr[i]);
    }

    printf("\nThe elements stored in the first array are : ");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }

    //copying arr to arr1
    for(i=0; i<n; i++)
    {
        arr1[i] = arr[i];
    }
    printf("\nThe elements stored in the first array are : ");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\n");

    return 0;
}
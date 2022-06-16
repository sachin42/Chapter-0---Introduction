// Write a C program to perform a binary search in an array
#include<stdio.h>
#include<stdlib.h>

int compare_integers (const void * x, const void * y)
{
  return ( *(int*)x - *(int*)y );
}

int main ()
{
	int * arrItem;
	int findValue;
	int my_array[100];
	int n,i;
       printf("\nInput the number of elements to be stored in the array :");
       scanf("%d",&n);
   
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
        {
	      printf("element - %d : ",i+1);
	      scanf("%d",&my_array[i]);
	    }		
	printf (" Input a value to search : ");
	scanf ("%d", &findValue);
	arrItem = (int*) bsearch (&findValue,
		my_array, n, sizeof (int), compare_integers);
	if (arrItem != NULL)
		printf ("%d is found in the array.\n\n",*arrItem);
	else
		printf ("%d is not found in the array.\n\n",findValue);
	return 0;
}

// Write a C program to sort the elements of an array
#include<stdio.h>
#include<stdlib.h>

	int comparetor (const void * x, const void * y)
	{
		return ( *(int*)x - *(int*)y );
	}
	int main ()
	{
	int my_array[100];
	int n,i;
       printf("\nInput the number of elements to be stored in the array :");
       scanf("%d",&n);
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
        {
	      printf("element - %d : ",i);
	      scanf("%d",&my_array[i]);
	    }		
		qsort (my_array, n, sizeof(int), comparetor );
       printf("\nAfter sorting the array are :\n");
		for (i=0; i<n; i++)
			printf ("%d \n",my_array[i]);
		return 0;
	}

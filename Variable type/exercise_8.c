// Write a C program to return the absolute value of a long integer#include<stdio.h>
#include<stdlib.h>

	int main ()
	{
		long int x,y;
	      printf("\n Input 1st number (positive or negative) : ");
	      scanf("%ld",&x);	
	      printf(" Input 2nd number (positive or negative) : ");
	      scanf("%ld",&y);		
		printf (" The absolute value of 1st number is : %ld\n",labs(x));
		printf (" The absolute value of 2nd number is : %ld\n\n",labs(y));

		return 0;
		}

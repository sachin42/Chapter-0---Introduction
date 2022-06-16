// Write a C program to convert a string to an integer
#include<stdio.h>
#include<stdlib.h>

int main ()
	{
		int num1;
		char my_array [256];

		printf ("\nInput a number : ");
		fgets (my_array, 256, stdin);

		num1 = atoi (my_array);
		printf ("The value Input is %d.\n\n", num1);

		return 0;
	}

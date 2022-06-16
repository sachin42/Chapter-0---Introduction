// Write a C program to convert a string to a double
#include<stdio.h>
#include<stdlib.h>

int main ()
	{
		double num1,num2;
		char my_array [256];
		printf ( "\n Input a number : " );
		fgets (my_array, 256, stdin);	
		num1 = atof (my_array);
		num2 = num1/2;
		printf (" The original number is : %f \n", num1);
		printf (" After division by 2 the number is : %f\n\n", num2);
		return 0;
	}

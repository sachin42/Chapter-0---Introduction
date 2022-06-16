// Write a C program to get the environment string#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>

int main ()
	{
		char * PathPtr;
		
		PathPtr = getenv ("PATH");

		if (PathPtr!=NULL)
			printf ("\nThe set path is: %s\n\n",PathPtr);

		return 0;
    }

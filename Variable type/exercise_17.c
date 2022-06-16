// Write a C program to abort the current process
#include<stdio.h>
#include<stdlib.h>

int main ()
	{
		FILE * FilePtr;
		FilePtr= fopen ("myfile.txt","r");

		if (FilePtr == NULL)
		{
			fputs ("\n File does not exist or error, in opening the file.\n",stderr);
			abort();
		}

		fclose (FilePtr);

		return 0;
	}

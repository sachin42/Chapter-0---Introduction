// Write a C program to convert a string to a long integer.
#include<stdio.h>
#include<stdlib.h>
int main ()
{
	char buffer[] = "2016 40a0b0 -1101110100110111100110 0x5abfff";
	char * ptr_end;
	long int i1, i2, i3, i4;

	i1 = strtol (buffer,&ptr_end,10);
	i2 = strtol (ptr_end,&ptr_end,16);
	i3 = strtol (ptr_end,&ptr_end,2);
	i4 = strtol (ptr_end,NULL,0);
	printf ("\nIn decimals: %ld, %ld, %ld, %ld.\n\n", i1, i2, i3, i4);

    char inpu1[] = "2016 75a0ba -1100010110001110101";
    
    char * ctr_end;
    long int c1,c2,c3;

    c1 = strtol (inpu1,&ctr_end,10);
    c2 = strtol (ctr_end,&ctr_end,16);
    c3 = strtol (ctr_end,&ctr_end,2);

    printf("\n in decimals: %ld, %ld, %ld.\n\n", c1,c2,c3);

	return 0;
}

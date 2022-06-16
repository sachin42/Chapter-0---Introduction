// Write a C program to integral quotient and remainder of a division#include<stdio.h>
#include<stdlib.h>

int main ()
{
    long int n,d;
	ldiv_t result;
	
	      printf("\n Input numerator : ");
	      scanf("%ld",&n);	
	      printf(" Input denominator : ");
	      scanf("%ld",&d);		      
	result = ldiv (n,d);
	printf (" quotient =  %ld, remainder = %ld.\n\n",result.quot,result.rem);
	return 0;
}

// Write a C program to return the quotient and remainder of a divisionWrite a C program to return the quotient and remainder of a division
#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int num1,num2;
	div_t divresult;
	      printf("\n Input numerator : ");
	      scanf("%d",&num1);	
	      printf(" Input denominator : ");
	      scanf("%d",&num2);
	      
	      
	divresult = div (num1,num2);
	printf (" quotient =  %d, remainder = %d.\n\n", divresult.quot, divresult.rem);
	return 0;
}

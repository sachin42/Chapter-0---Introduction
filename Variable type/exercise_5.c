// Write a C program to generate a random number
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

	int main ()
	{
		int number, input;
		/* initialize random seed: */
		srand ( time(NULL) );
		/* Generate a random number: */
		number = rand() % 10 + 1;
		do {
				printf ("\nGuess the number (1 to 10): ");
				scanf ("%d",&input);
				if (number > input){
					printf ("The number is higher\n");
                }
                else if (number < input)
                {
                    printf("The number is lower\n");
                }
                
			} while (number!=input);
		printf ("That is correct!\n\n");
		return 0;
	}

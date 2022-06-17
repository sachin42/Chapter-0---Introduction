// Write a program in C to read any digit, display in the word.
#include <stdio.h>
void main()
{
   int cdigit;

   printf("Input Digit(0-9) : ");
   scanf("%d",&cdigit);
   switch(cdigit)
   {
	 case 0:
	       printf("Zero\n");
	       break;
 
	 case 1:
	       printf("one\n");
	       break;
	case 2:
	       printf("Two\n");
	       break;
	case 3:
	       printf("Three\n");
	       break;
	case 4:
	       printf("Four\n");
	       break;
	case 5:
	       printf("Five\n");
	       break;
	case 6:
	       printf("Six\n");
	       break;
	case 7:
	       printf("Seven\n");
	       break;
	case 8:
	       printf("Eight\n");
	       break;
	case 9:
	       printf("Nine\n");
	       break;
	default:
	       printf("invalid digit. \nPlease try again ....\n");
	       break;
      }
}

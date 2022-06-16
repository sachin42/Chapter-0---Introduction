#include <stdio.h>
int tot_mins;  /* given number of minutes */
int hrs;          /* number of hours (to be computed) */
int mins;        /* number of minutes (to be computed) */

const int MINaHOUR = 60;      /* number of minutes in an hour */

char line_text[50];      /* line of input from keyboard */

int main() {
	printf("Input minutes: ");
	fgets(line_text, sizeof(line_text), stdin);
	sscanf(line_text, "%d", &tot_mins);

	hrs = (tot_mins / MINaHOUR);
	mins = (tot_mins % MINaHOUR);

	printf("%d Hours, %d Minutes.\n", hrs, mins);

	return(0);
}

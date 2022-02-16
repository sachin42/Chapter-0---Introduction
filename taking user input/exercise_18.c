#include <stdio.h>
int hrs;          /* given number of hours */
int mins;         /* given number of minutes */
int tot_mins;     /* total number of minutes (to be computed) */

const int MINaHOUR = 60;      /* number of minutes in an hour */

char line_text[50];      /* line of input from keyboard */

int main() {
	printf("Input hours: ");
	fgets(line_text, sizeof(line_text), stdin);
	sscanf(line_text, "%d", &hrs);

	printf("Input minutes: ");
	fgets(line_text, sizeof(line_text), stdin);
	sscanf(line_text, "%d", &mins);

	tot_mins = mins + (hrs * MINaHOUR);

	printf("Total: %d minutes.\n", tot_mins);

	return(0);
}

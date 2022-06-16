#include <stdio.h>
int main() {
float rec_width;         /* width of the rectangle */
float rec_height;        /* height of the rectangle */
float rec_perimeter;     /* perimeter (to be computed) */
char line_text[50];        /* a line of input */

	printf("Input the height of the Rectangle : ");
	sscanf(line_text, "%f", &rec_height);
	printf("Input the width of the Rectangle : ");
	sscanf(line_text, "%f", &rec_width);
	rec_perimeter = 2.0 * (rec_height + rec_width); /* perimeter = 2 * ( width + height )*/
	printf("Perimeter of the Rectangle is : %f\n", rec_perimeter);
	return 0;
}

// rite a program in C to make such a pattern like a pyramid with a number which will repeat the number in the same row
#include <stdio.h>
int main()
{
   int i,j,spc,rows,l,t=1;
   printf("Input number of rows : ");
   scanf("%d",&rows);
   spc=rows+4-1;
   for(i=1;i<=rows;i++)
   {
        for(l=spc;l>=1;l--)
            {
              printf(" ");
            }
        for(j=1;j<=i;j++)
            {
	        printf("%d ",t);
            }
	printf("\n");
    t++;
    spc--;
   }
}
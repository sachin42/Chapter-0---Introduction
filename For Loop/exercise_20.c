// Write a program in C to display the pattern like a pyramid using asterisk and each row contain an odd number of asterisks
int main()
{
   int i,j,rows;
   printf("Input number of rows : ");
   scanf("%d",&rows);
   for(i=0;i<rows;i++)
   {
        for(j=1;j<=rows-i;j++)
            {
               printf(" ");
            }
	      for(j=1;j<=2*i-1;j++)
	         {
               printf("*");
            }
	printf("\n");
    
   }
}
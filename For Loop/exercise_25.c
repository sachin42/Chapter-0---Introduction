// Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.
#include <stdio.h>

int main() {

    int i,n;
    long sum=0,t=1;
    printf("Input the vale of terms:");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++)
    {
        printf("%ld ",t);
        if (i<n)
            {
                printf("+ ");   
            }
        sum+=t;
        t=(t*10)+1;
    }
    printf("\nSum of the Series is: %ld.\n",sum);
    return 0;
}
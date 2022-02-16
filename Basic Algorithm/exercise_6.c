#include <stdio.h>
#include <stdlib.h>
int main(void){
    printf("%d",test(120, -1));
    printf("\n%d",test(-1, 120));
    printf("\n%d",test(2, 120));
    }   
   int test(int temp1, int temp2)
        {
             return temp1 < 0 && temp2 > 100 || temp2 < 0 && temp1 > 100;
        }

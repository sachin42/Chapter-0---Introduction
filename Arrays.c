#include <stdio.h>

int main()
{

    long scoresOne[5]= { 980, 230, 870, 650, 345,};


    for (int i = 0; i < 5; i++)
    {
        printf("%ld\n", &scoresOne[i]);
    }
    
   
    

    return 0;
}
// Write a C program to calculate profit and loss on a transaction
#include <stdio.h>

int main() {

    long cprice,sprice;

    printf("Enter the cprice and sprice :");
    scanf("%ld%ld", &cprice,&sprice);

    if (cprice < sprice)
    {
        printf("You can booked your profit amount: %ld\n", sprice-cprice);
    } else if(sprice < cprice)
    {
        printf("you can booked your loss amount: %ld\n", cprice-sprice);
    }else
    {
        printf("No loss No profit\n");
    }
    
    
    return 0;
}
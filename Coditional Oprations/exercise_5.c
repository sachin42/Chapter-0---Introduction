// read your age and check if you are elligible for casting a vote 
#include <stdio.h>

int main() {

    int a;
    printf("Enter your age: ");
    scanf("%d", &a);

    a > 17 ? printf("you are elligible for casting your own vote.\n"): printf("Your not elligible for voting.\n");

    return 0;
}
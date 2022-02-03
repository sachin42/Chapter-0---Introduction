#include <stdio.h>

// return true if one of the two given integers are 30 or their sum is 30

int main() {

    int a, b;
    printf("enter first integer: ");
    scanf("%d", &a);
    printf("enter secend integer: ");
    scanf("%d", &b);

    if ((a == 30) || (b == 30) || ((a + b) == 30))
        {
            printf("true\n");
        } else
            {
                printf("False\n");
            }
    
    ((a == 30) || (b == 30) || ((a + b) == 30))? printf("true\n"): printf("False\n");// ternery expression

    return 0;
}
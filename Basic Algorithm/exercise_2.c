#include <stdio.h>

// if given value is greater than 51 triple their diffrence else give there absolute diffrence

int main() {

    const int a = 51;
    int b,result;

    printf("Enter a integer: ");
    scanf("%d", &b);

    if (b > a)
        {
            result = (b - a) * 3;
        } else
            {
                result = a - b;
            }
    printf("Result is %d.\n", result);

    (b > a)? (result = (b - a) * 3):(result = a - b);//ternery expression
    printf("Result is %d.\n", result); // ghhhh

    

    return 0;
}
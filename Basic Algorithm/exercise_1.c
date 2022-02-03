#include <stdio.h>

// return sum of two integer values if integers are same then triple there sum
//  if else method

int main() {

    int a, b, sum;

    printf("Enter First integer: ");
    scanf("%d", &a);
    printf("Enter second integer: ");
    scanf("%d", &b);

    if (a == b)
        {
            sum = (a + b) * 3;
        } else
            {
                sum = a + b;
            }
    printf("Result is %d.\n", sum);

    (a == b) ? (sum = (a + b) * 3): (sum = a + b);// ternery expression
    printf("Result is %d.\n", sum); // result

    return 0;
}
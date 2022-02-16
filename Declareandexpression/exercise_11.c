#include<stdio.h>

int main() {
    float numberOfItem1, numberOfItem2, weightOfItem1, weightOfItem2;

    printf("Enter the number of item1 and weight seperated by comma: ");
    scanf("%f,%f", &numberOfItem1, &weightOfItem1);
    printf("Enter the number of item2 and weight seperated by comma: ");
    scanf("%f,%f", &numberOfItem2, &weightOfItem2);

    printf("average weight os items %.2f\n", ((numberOfItem1 * weightOfItem1) + (numberOfItem2 * weightOfItem2)) / (numberOfItem1 + numberOfItem2));
    return 0;
}
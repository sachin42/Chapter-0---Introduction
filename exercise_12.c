#include<stdio.h>

int main() {
    int id;
    float hours, salary;

    printf("Input Employee's Id:");
    scanf("%d", &id);

    printf("Enter The working hours:");
    scanf("%f", &hours);

    printf("Enter salary amount/hrs:");
    scanf("%f", &salary);

    printf("Employees Id = %d\n", id);
    printf("Salary = U$ %.2f\n", hours * salary);

    return 0;
}
/*
 Author:	Internshala
 Module:	Diving into C Programming
 Topic:		User Defined Data Types
*/

#include <stdio.h>
#include <string.h>

struct Employee
{
    int id;
    char name[20];
    float salary;
};

int main()
{
    /* Wap to store details of a employee.*/
    struct Employee e1;
    e1.id = 1;
    strcpy(e1.name, "peter");
    e1.salary = 23000;

    printf("Employee details: \n Employee ID: %d \n Name: %s \n Salary: Rs. %0.2f\n\n", e1.id, e1.name, e1.salary);

    struct Employee e2;
    e2.id = 2;
    strcpy(e2.name, "poter");
    e2.salary = 25000;

    printf("Employee details: \n Employee ID: %d \n Name: %s \n Salary: Rs. %0.2f\n\n", e2.id, e2.name, e2.salary);

    return 0;
}

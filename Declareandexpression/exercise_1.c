#include <stdio.h>

int main()
{
    int mobileNumber;
    char dateOfBirth[10], name[30];

    printf("Enter your Name: ");
    scanf("%s", &name);

    printf("Enter date of birth in DD/MM/YYYY format: ");
    scanf("%s", &dateOfBirth);

    printf("Enter Mobile Number: ");
    scanf("%d", &mobileNumber);
    
    printf("Name:           %s\n", name);
    printf("Date Of Birth:  %s\n", dateOfBirth);
    printf("Mobile No.:     %d\n", mobileNumber);
    return 0;
}
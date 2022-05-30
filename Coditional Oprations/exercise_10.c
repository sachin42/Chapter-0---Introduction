#include <stdio.h>

int main()
{

    int marksMath, marksPhysics, marksChemistry, totalMarks, sum;

    printf("Enter marks obtained in Math: ");
    scanf("%d", &marksMath);
    printf("Enter marks obtained in Physics: ");
    scanf("%d", &marksPhysics);
    printf("Enter marks obtained in Chemistry: ");
    scanf("%d", &marksChemistry);

    sum = marksMath + marksPhysics;
    totalMarks = sum + marksChemistry;

    if (marksMath >= 65 && marksPhysics >= 55 && marksChemistry >= 50 && sum >= 140 && totalMarks >= 190)
    {
        printf("Eligibile for admission");
    }
    else
    {
        printf("Not Eligibile for admission");
    }

    return 0;
}
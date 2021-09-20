#include <stdio.h>

int main(void)
{
    float math, ProgrammingLanguage, DataStructrue;
    float average;

    printf("Put the discrete math score: ");
    scanf("%f", &math);
    printf("Put the programming language: ");
    scanf("%f", &ProgrammingLanguage);
    printf("Put the data structure: ");
    scanf("%f", &DataStructrue);

    average = (math + ProgrammingLanguage + DataStructrue) / 3;

    if (average > 95)
    {
        printf("The average score is %0.2f and the grade is A+", average);
    }
    else if (average > 90)
    {
        printf("The average score is %0.2f and the grade is A0", average);
    }
    else if (average > 85)
    {
        printf("The average score is %0.2f and the grade is B+", average);
    }
    else if (average > 80)
    {
        printf("The average score is %0.2f and the grade is B0", average);
    }
    else if (average > 75)
    {
        printf("The average score is %0.2f and the grade is C+", average);
    }
    else if (average > 70)
    {
        printf("The average score is %0.2f and the grade is C0", average);
    }
    else if (average <= 70)
    {
        printf("The average score is %0.2f and the grade is F", average);
    }
}

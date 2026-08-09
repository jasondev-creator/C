//Program 8
#include <stdio.h>

int main()
{
    float percentage;

    // Input
    printf("Enter the percentage of marks: ");
    scanf("%f", &percentage);

    // If-Else Ladder
    if (percentage >= 70)
    {
        printf("Result: Distinction\n");
    }
    else if (percentage >= 60)
    {
        printf("Result: First Class\n");
    }
    else if (percentage >= 50)
    {
        printf("Result: Second Class\n");
    }
    else if (percentage >= 40)
    {
        printf("Result: Pass\n");
    }
    else
    {
        printf("Result: Fail\n");
    }

    return 0;
}
#include <stdio.h>
int main()
{
    int mark1, mark2, mark3, total;
    float percentage;
    printf("Enter marks of three subjects:\n");
    scanf("%d %d %d", &mark1, &mark2, &mark3);
    total = mark1 + mark2 + mark3;
    percentage = (total / 300.0) * 100;
    printf("Total Marks = %d\n", total);
    printf("Percentage = %.2f\n", percentage);

    if (percentage >= 90)
        printf("Grade A\n");
    else if (percentage >= 80)
        printf("Grade B\n");
    else if (percentage >= 70)
        printf("Grade C\n");
    else if (percentage >= 60)
        printf("Grade D\n");
    else if (percentage >= 50)
        printf("Grade E\n");
    else
        printf("Failed\n");
    return 0;
}

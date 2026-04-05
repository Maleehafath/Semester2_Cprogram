#include<stdio.h>

int main()
{
    float a, b;
    float *p, *q;
    int choice;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    p = &a;
    q = &b;

    printf("\nChoose operation:\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("Sum = %.2f\n", *p + *q);
    }
    else if(choice == 2)
    {
        printf("Difference = %.2f\n", *p - *q);
    }
    else if(choice == 3)
    {
        printf("Product = %.2f\n", *p * *q);
    }
    else if(choice == 4)
    {
        if(*q != 0)
            printf("Quotient = %.2f\n", *p / *q);
        else
            printf("Division by zero not allowed!\n");
    }
    else
    {
        printf("Invalid choice!\n");
    }

    return 0;
}

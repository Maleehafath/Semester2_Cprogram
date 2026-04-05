#include<stdio.h>

int main()
{
    int a, b, c;
    int *p, *q, *r;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    p = &a;
    q = &b;
    r = &c;

    if(*p >= *q && *p >= *r)
    {
        printf("Largest = %d\n", *p);
    }
    else if(*q >= *p && *q >= *r)
    {
        printf("Largest = %d\n", *q);
    }
    else
    {
        printf("Largest = %d\n", *r);
    }

    return 0;
}

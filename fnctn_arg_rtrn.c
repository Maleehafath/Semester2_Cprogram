#include<stdio.h>
int factorial(int,int);
int main()
{
    int fact=1,n,f;
    printf("Enter the number");
    scanf("%d",&n);
    f=factorial(fact,n);
    printf("Factorial of %d=%d",n,f);
    return 0;
}
int factorial(int fact,int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}

#include<stdio.h>
void factorial(int,int);
int main()
{
    int fact=1,n;
    printf("Enter the number");
    scanf("%d",&n);
    factorial(fact,n);
    return 0;
}
void factorial(int fact,int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    printf("Factorial of %d=%d",n,fact);
}

#include<stdio.h>
void factorial();
int main()
{
    factorial();
    return 0;
}
void factorial()
{
    int fact=1,n,i;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    printf("Factorial of %d=%d",n,fact);
    return 0;
}

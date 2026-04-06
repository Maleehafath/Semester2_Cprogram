#include <stdio.h>
int reverse(int num)
{
    int reverse=0;
    while(num!=0)
    {
        reverse=reverse*10+num%10;
        num=num/10;
    }
    return reverse;
}
int sum(int num)
{
    int sum=0;
    while(num!=0)
    {
        sum=sum+num%10;
        num=num/10;
    }
    return sum;
}
int main()
{
    int num,r,s;
    printf("Enter a number");
    scanf("%d",&num);
    printf("Reverse of the number:%d\n",reverse(num));
    printf("Sum of number:%d\n",sum(num));
    return 0;
}

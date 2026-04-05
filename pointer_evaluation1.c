#include<stdio.h>
int main()
{
  int a,b,y;
  int *p1,*p2;
  a=10;
  b=20;
  p1=&a;
  p2=&b;
  y=*p1*(*p2);
  int sum=0;
  sum+=*p1;
  *p2+=10;
  printf("y is %d\n",y);
  printf("Sum is %d\n",sum);
  printf("Value pointed by p2 is %d",*p2);
}

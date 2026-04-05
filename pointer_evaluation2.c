#include<stdio.h>
int main()
{
  int a,b,z;
  int *p1,*p2;
  a=10;
  b=20;
  p1=&a;
  p2=&b;
  z=5*-(*p2)/(*p1);
  printf("Value of z is %d\n",z);
  printf("%d\n",p1+4);
  printf("%d\n",p2-2);
  printf("%d\n",p1-p2);
}

#include<stdio.h>
void swap(int *,int *);
int main()
{
  int x,y;
  x=100;
  y=200;
  printf("Before exchange x=%d y=%d\n",x,y);
  swap(&x,&y);
  printf("After exchange x=%d y=%d\n",x,y);
}
void swap(int *a,int *b)
{
  int t;
  t=*a;
  *a=*b;
  *b=t;
}

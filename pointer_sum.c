#include<stdio.h>
int main()
{
    int *p,sum,i;
    int x[5]={5,9,6,3,7};
    i=0;
    p=x;
    printf("Element Value Address\n");
    while(i<5)
    {
        printf("x[%d]    %d     %u\n",i,*p,p);
        sum=sum+ *p;
        i++,p++;
    }
    printf("\nSum=%d\n",sum);
    printf("&x[0]=%u\n",&x[0]);
    printf("p=%u\n",p);
}

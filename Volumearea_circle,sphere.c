#include<stdio.h>
int main()
{
    int r,R,AC,VS ;
    printf("enter radius to find volume of sphere : ");
    scanf("%d",&R);
    printf("enter radius of the circle : ");
    scanf("%d",&r);
    AC = 3.141*(r*r) ;
    VS = (4*3.141*(R*R*R))/3 ;
    printf("total volume of the sphere is : %d \n",VS);
    printf("total area of the cirlce is : %d \n",AC);
}

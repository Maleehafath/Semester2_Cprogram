#include <stdio.h>
void subtract(int n, int m,int a[][m],int b[][m]);
int main()
{
    int n,m,i,j;
    printf("Enter the limit of row:");
    scanf("%d",&n);
    printf("Enter the limit of columns:");
    scanf("%d",&m);
    int a[n][m],b[n][m];
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            printf("Enter the element:");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d",a[i][j]);
            printf(" ");
        }
        printf("\n");
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            printf("Enter the element:");
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d",b[i][j]);
            printf(" ");
        }
        printf("\n");
    }
    printf("Subtraction of the two matrices:\n");
    subtract(n,m,a,b);
    return 0;
}
void subtract(int n, int m,int a[][m],int b[][m])
{
    int i,j,c[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d",a[i][j]);
            printf("%d\n",b[i][j]);
            c[i][j]=a[i][j]-b[i][j];
        }
    }
    for (i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d",c[i][j]);
            printf(" ");
        }
        printf("\n");
    }
}

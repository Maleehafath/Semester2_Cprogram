#include<stdio.h>
int main()
{
	int a[100][100],i,j,n,m;
	printf("Enter the limit of row:");
	scanf("%d",&m);
	printf("Enter the limit of column:");
	scanf("%d",&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",a[i][j]);
			printf(" ");
		}
		printf("\n");
	}
	if(m==n)
	{
		printf("Diagonal elements are:");
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(i==j)
				{
					printf("%d",a[i][j]);
					printf(" ");
				}
			}
		}
	}
	else
	{
		printf("Diagonal elements doesnt exist");
	}
	return 0;
}

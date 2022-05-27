#include <stdio.h>

int main()
{
	int n;
	printf("Enter the n: \n");
	scanf("%d",&n);
	int a[n][n],b[n][n];
	printf("Enter the matrix elem\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	
	for(int i=n-1;i>=0;i--)
	{
		for(int j=0;j<n;j++)
		{
			b[i][j]=a[j][i];
		}
	}
	
	for(int i=n-1;i>=0;i--)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}

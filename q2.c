#include <stdio.h>

int main()
{
	int n,sum,i,j,c,index1,index2;
	printf("Enter the n: \n");
	scanf("%d",&n);
	int a[n];
	printf("Enter elem\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the sum: \n");
	scanf("%d",&sum);	
	for(i=0;i<n;i++)
	{
		c=0;	
		for(j=i;j<n;j++)
		{
			c+=a[j];
			if(c==sum)
			{
				index1=i;
				index2=j;
				break;
			}
			
		}
	}
	for(i=index1;i<=index2;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	for(i=index1;i<=index2;i++)
	{
		printf("%d ",i);
	}
	return 0;
}


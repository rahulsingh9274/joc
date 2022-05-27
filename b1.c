#include <stdio.h>

int main()
{
	int n;
	printf("Enter size\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter elem\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				a[j]=-999;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]!=-999)
		{
			printf("%d ",a[i]);
		}
	}
	return 0;
}
				
				
				
	

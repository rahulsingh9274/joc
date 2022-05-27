#include <stdio.h>

int main()
{
	int n,temp;
	printf("Enter size\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter elem\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int j=n-1;
	for(int i=0;i<n;i++)
	{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		if(i==n/2)
			break;
		j--;
	}
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
		
	return 0;
}
				
				
				
	

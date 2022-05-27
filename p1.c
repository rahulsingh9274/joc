#include<stdio.h>

int main()
{
	int i,n,slarg=0,larg=0,flag = 0;;
	int a[20];
	
	printf("Enter the value of n: ");
	scanf("%d",&n);
	
	printf("Enter the numbers: \n");
	for(i=0; i<n; i++)
		scanf("%d",&(a[i]));
	
	
	for(i=0; i<n; i++ )
	{
		if(larg < a[i] )
			larg = a[i];
		if(larg == a[i+1])
		{
			printf("l = %d\n",a[i+1]);
			flag = 1;
		}
			
		
	}		
	printf("l1 = %d\n",larg);
	
	if(flag == 0)
	{
	
		for(i=0; i<n; i++ )
		{
			if(slarg < a[i])
				if(a[i] < larg)
					slarg = a[i];
		}			
		printf("l2 = %d\n",slarg);
	}
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char s[100];
	char ele;
	//int max[1000];
	int cnt,res=0;
	printf("Enter the string\n");
	scanf("%[^\n]",s);
	for(int i=0;i<strlen(s);i++)
	{
		ele=s[i];
		cnt=0;
			for(int j=0;j<strlen(s);j++)
			{
				if(ele==s[j])
				{
					cnt++;
				}
			}
		if(res<=cnt)
			res=cnt;
		else
			res+=0;
		
	}
	printf("%d",res);
	return 0;
}
			

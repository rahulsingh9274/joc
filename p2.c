#include<stdio.h>
#include<stdlib.h>


void accept(int *, int );
void display(int *, int );
void change(int *, int *, int );

int main()
{
	int *a,*b;
	int n;
	
	printf("Enter the value of n: ");
	scanf("%d",&n);
	
	a = (int*)malloc(sizeof(int)*n);
	b = (int*)malloc(sizeof(int)*n);
	
	accept(a,n);
	display(a,n);
	change(a,b,n);
	display(b,n);
}

void accept(int *p, int n)
{
	int i;
	
	for(i=0; i<n; i++)	
		scanf("%d",&(p[i]));
}

void display(int *p, int n)
{
	int i;
	for(i=0; i<n; i++)
		printf("%d  ",p[i]);
	printf("\n");
	
}
void change(int *a, int *b, int n)
{
	int i,j=0,pb;
	
	printf("Enter the pbit: ");
	scanf("%d",&pb);
	
	//b[n-1] = a[0];
	
	for(i=pb; i<n; i++)
		b[j++] = a[i];
		
	for(i=0; i<pb; i++)
		b[j++] = a[i];
}
	
	
	
	
	
	
	
	

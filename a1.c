#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 5
struct books
{
	int id;
	char bn[50];
	char an[50];
	float price;
};
typedef struct books B;
B b[max];
void push(int *top, int id, char bn[50], char an[50], float price)
{
	
	if(*top<max-1)
	{
		(*top)++;
		b[*top].id=id;
		strcpy(b[*top].bn,bn);
		strcpy(b[*top].an,an);
		b[*top].price=price;
	}
	else
	{
		printf("Insertion not possible\n");
	}
	return;
}

void pop(int *top)
{
	if(*top==-1)
	{
		printf("Deletion not possible\n");
	}
	else
	{
		//(*top)--;
		printf("Delete book is %d %s %s %f",b[*top].id,b[*top].bn,b[*top].an,b[*top].price);
		(*top)--;
	}
	return;
}

void display(int top)
{
	int i;
	for(i=0;i<=top;i++)
	{
		printf("%d %s %s %f\n",b[i].id, b[i].bn, b[i].an, b[i].price);
		printf("\n");
	}
	return;
}

int main()
{
	int n,ch,id,top=-1;
	char bn[50],an[50];
	float price;
	//b=(B *)malloc(sizeof(struct books)*max);
	//printf("Enter the no of books\n");
	//scanf("%d",&n);
	while(1)
	{
		printf("1. Insert\n 2.Delete\n 3.Display\n 4.Exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("Enter the books details\n");
				scanf("%d%s%s%f",&id,bn,an,&price);
				push(&top,id,bn,an,price);
				break;
			case 2: pop(&top);
				break;
			case 3: display(top);
				break;
			case 4: exit(0);
			default: printf("Enter valid choice\n");
		}
	}
	return 0;
}
			
			
		
		
		
		
		
		
		
		
		
		
		
		
		


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max 5
int a[max],b[max],top=-1,top2=-1;
void enque()
{
	int t;
	if(top==max-1)
	{
		printf("Stack Overflow\n");
	}
	else
	{
		top++;
		printf("enter element ");
		scanf("%d",&t);
		a[top]=t;
		}
}
void deque()
{
	int i;
	if(top2==-1)
	{
		for(i=0;i<=top;i++)
		{
			printf("%d\t",a[i]);
			top2++;
			printf("%d\n",top2);
			b[top2]=a[top-i];
		}
		top=-1;
		printf("Element ");
		printf("%d\n",b[top2]);
		top2--;
	}
	else
	{
		printf("%d\n",b[top2]);
		top2--;
	}
}




void display()
{
	int i;
	for(i=0;i<=top;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("new");
	for(i=0;i<=top2;i++)
	{
		printf("%d\n",b[i]);
	}
}
int main()
{
	int n;
	while(1>0)
{
	
	printf("Your choices are\n 1)Enque\n 2)Deque\n 3)display\n 4)exit\n ");
	scanf("%d",&n);
	if(n==1)
	{
		enque();
	}
	else if(n==2)
	{
		deque();
	}
	else if(n==3)
	{
	display();	
	}	
	else if(n==4)
	{
		break;
	}
}
	
	
	
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max 5
int a[max],top=-1;
void push()
{
	int t;
	if(top==max-1)
	{
		printf("Stack-Overflow\n");
	}
	else
	{
		top++;
		printf("Give element to push ");
		scanf("%d",&t);
		a[top]=t;
		printf("Element added is %d\n",a[top]);
	}
}
void pop()
{
	if(top==-1)
	{
		printf("Stack-Underflow\n");
	}
	else
	{
		printf("Element to pop is %d\n",a[top]);
		top--;
	}
}
void display()
{
	int i;
	for(i=0;i<=top;i++)
	{
		printf("%d\n",a[i]);
	}
}



int main()
{
	int n;
	while(1>0)
{
	
	printf("Your choices are\n 1)push\n 2)pop\n 3)display\n 4)exit\n ");
	scanf("%d",&n);
	if(n==1)
	{
		push();
	}
	else if(n==2)
	{
		pop();
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

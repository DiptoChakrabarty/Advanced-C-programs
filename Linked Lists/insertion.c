#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
void addlast(struct node **head, int v)
{
	struct node *last=NULL;
	struct node *first=NULL;
	last=(struct node*)malloc(sizeof(struct node));
	first=(struct node*)malloc(sizeof(struct node));
	first->data=v;
	first->next=NULL;
	//printf("%d**",first->data);
	last=*head;
	while(last->next!=NULL)
	{
		//last->data=v;
		last=last->next;
	}
	last->next=first;
	//printf("%d#",last->data);
}
void printnodes(struct node *head)
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp=head;
	
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}
int main()
{
	int i,n,t,ne;
	struct node *head=NULL;
	
	head=(struct node*)malloc(sizeof(struct node));
	
	head->data=1;
	head->next=NULL;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&t);
		addlast(&head,t);
	}
	addlast(&head,n);
	addlast(&head,n+1);
	printnodes(head);
	/*second->data=i;
	head->next=second;
	printf("%d\t%d",head->data,second->data);
	for(i=0;i<n;i++)
	{
		scanf("%d",&t);
		
	}*/
	return 0;
}


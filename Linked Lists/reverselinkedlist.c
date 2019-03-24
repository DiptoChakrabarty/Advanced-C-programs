#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
void insert(struct node **head,int n)
{
	struct node* ne;
	ne=(struct node*)malloc(sizeof(struct node));
	ne->data=n;
	ne->next=NULL;
	struct node* last;
	last=(struct node*)malloc(sizeof(struct node));
	last= *head;
	while(last->next!=NULL)
	{
		last=last->next;
	}
	last->next=ne;
	
	
}
void show(struct node *head)
{
	struct node* ne;
	ne=(struct node*)malloc(sizeof(struct node));
	ne=head;
	while(ne!=NULL)
	{
		printf("%d\t",ne->data);
		ne=ne->next;
	}
	
}
void delete(struct node **head, int n)
{
	struct node* pre;
	pre=(struct node*)malloc(sizeof(struct node));
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp=*head;
	while(temp!=NULL && temp->data!=n)
	{
		pre=temp;
		temp=temp->next;
	}
	pre->next=temp->next;
	free(temp);
}
int  reverse(struct node *head)
{
	if(head==NULL)
	{
		return 0;
	}
		reverse(head->next);
		printf("%d\t",head->data);
	
}



int main()
{
	int i ,n,t,k;
	struct node* head;
	head=(struct node*)malloc(sizeof(struct node));
	head->data=0;
	head->next=NULL;
	
	printf("Give your range\n");
	scanf( "%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&t);
		insert(&head,t);
	
	}
		show(head);
		printf("Now reversed one is\n");
		reverse(head);
	
		
	return 0;
}

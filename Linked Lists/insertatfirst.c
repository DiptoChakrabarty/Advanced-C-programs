#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
void insert(struct node **head, int n)
{
	struct node* ne;
	ne=(struct node*)malloc(sizeof(struct node));
	ne->data=n;
	
	ne->next=*head;
	*head=ne;
}
void addlater(struct node *prev,int n)
{
		struct node* ne;
	ne=(struct node*)malloc(sizeof(struct node));	
	ne->data=n;
	ne->next=prev->next;
	prev->next=ne;
	
}
		//printf("$%d\n",last->data);
void show(struct node *head)
{
	struct node* ne;
	ne=(struct node*)malloc(sizeof(struct node));
	ne=head;
	printf("Elements are");
	while(ne!=NULL)
	{
		printf("%d\t",ne->data);
		ne=ne->next;
	}
	
}
int main()
{
	int n,i,t;
	struct node* head=NULL;
	head=(struct node*)malloc(sizeof(struct node));
	//head->data=NULL;
	//head->next=NULL;
	//printf("%d\n",head->data);
	head->data=1;
	head->next=NULL;
	printf("Give your range\n");
	scanf( "%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&t);
			insert(&head,t);
	
		
		
	}
	show(head);
	
	
	
	return 0;
}

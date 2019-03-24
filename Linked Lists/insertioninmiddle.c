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
	ne->next=NULL;
	struct node* last;
	last=(struct node*)malloc(sizeof(struct node));
	if(*head==NULL)
	{
		*head=ne;
	}
	else
	{
			
			last=*head;
		//printf("#%d\n",last->data);
	while(last->next!=NULL)
	{
		last=last->next;
	}
	last->next=ne;	
	}
	
		//printf("$%d\n",last->data);
	
}
void addlater(struct node *prev,int n)
{
		struct node* ne;
	ne=(struct node*)malloc(sizeof(struct node));	
	ne->data=n;
	ne->next=prev->next;
	prev->next=ne;
	
}
void show(struct node *head)
{
	struct node* ne;
	ne=(struct node*)malloc(sizeof(struct node));
	ne=head;
	printf("Elements are \t");
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
	head->data=0;
	head->next=NULL;
	//printf("%d\n",head->data);
	printf("Give your range\n");
	scanf( "%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&t);
		if(i%4==0)
		{
			insert(&head,t);
		}
		else{
			addlater(head->next,t);
			
		}
			
	
		
		
	}
//	addlater(head->next,10);
	show(head);
	
	
	
	return 0;
}

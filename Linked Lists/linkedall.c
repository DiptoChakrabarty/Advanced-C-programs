#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
void insert(struct node *head,int n)
{
	struct node* ne;
	ne=(struct node*)malloc(sizeof(struct node));
	struct node* last;
	last=(struct node*)malloc(sizeof(struct node));
	ne->data=n;
	ne->next=NULL;
	if(head==NULL)
	{
		/*head=(struct node*)malloc(sizeof(struct node));
		head->data=n;
		head->next=NULL;*/
		head=ne;
		last=head;	
	}
	
	else{
		
	/*	last->next=ne;
		last=ne;*/
	
	while(last->next!=NULL)
	{
	
		last=last->next;
		
	}
	last->next=ne;
	last=ne;
	
}
return ;
}


void show(struct node *head)
{
	struct node* ne;
	//ne=(struct node*)malloc(sizeof(struct node));
	ne=head;
	while(ne!=NULL)
	{
		printf("%d\t",ne->data);
		ne=ne->next;
	}
	
}
void rev(struct node *head)
{
	if(head==NULL)
	{
		return ;
	}
	rev(head->next);
	printf("%d\t",head->data);
	
}
void del(struct node **head,int n)
{
	struct node* last;
	last=(struct node*)malloc(sizeof(struct node));
	struct node* pre;
	pre=(struct node*)malloc(sizeof(struct node));
	last=*head;
	while(last!=NULL && last->data!=n)
	{
			pre=last;
			last=last->next;	
	}
	pre->next=last->next;
	free(last);
	
}
void fixeddel(struct node **head,int n)
{
	int p=0;
	struct node* last;
	last=(struct node*)malloc(sizeof(struct node));
	struct node* pre;
	pre=(struct node*)malloc(sizeof(struct node));
	last=*head;
	while(last!=NULL && p!=n)
	{
			pre=last;
			last=last->next;
			p++;	
	}
	pre->next=last->next;
	free(last);
	
}
void fixedadd(struct node **head,int n)
{
	int p=0;
	struct node* last;
	last=(struct node*)malloc(sizeof(struct node));
	struct node* pre;
	pre=(struct node*)malloc(sizeof(struct node));
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	last=*head;
	while(last!=NULL && p!=n)
	{
			pre=last;
			last=last->next;
			p++;	
	}
	
	temp->data=0;
	temp->next=last;
	pre->next=temp;
	
}
void mid(struct node **head)
{
	struct node* fast;
	fast=(struct node*)malloc(sizeof(struct node));
	struct node* slow;
	slow=(struct node*)malloc(sizeof(struct node));
	fast=*head;
	slow=*head;
	while(fast!=NULL && fast->next!=NULL)
	{
		fast=fast->next->next;
		slow=slow->next;
	}
	printf("Mid element is \t%d",slow->data);
	
	
	
}
void dup(struct node *head)
{
	int p;
	struct node* ne;
	ne=(struct node*)malloc(sizeof(struct node));
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	struct node* t;
	t=(struct node*)malloc(sizeof(struct node));
	ne=head;
	temp=head;
	while(temp!=NULL)
	{
		p=temp->data;
		while(ne!=NULL)
		{
			t=ne;
			if(ne->data==p)
			{
				ne=ne->next;
				t->next=ne->next;
				
			}
			
			
		}
		
		
	}
	
}

int main()
{
	int i,t,n,p;
	struct node* head;
	//head=(struct node*)malloc(sizeof(struct node));
	head=NULL;
	
	printf("Give no of elements ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&t);
		insert(head,t);
	}
	show(head);
	printf("\n");
	rev(head);
	printf("\n");
	scanf("%d",&p);
	//del(&head,p);
	//show(head);
	fixeddel(&head,p);
	show(head);
	printf("\n");
	fixedadd(&head,2);
	show(head);
	mid(&head);
	//dup(head);
	show(head);
		
	
	
	
	
	return 0;
}

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
void show(struct node *head)
{
	struct node* ne;
	ne=(struct node*)malloc(sizeof(struct node));
	ne=head;
	printf("Elements are\t");
	while(ne!=NULL)
	{
		printf("%d\t",ne->data);
		ne=ne->next;
	}
	
}


int compare_lists(struct node **head1, struct node **head2) 
{
    int p=1;
    struct node* temp1;
    temp1=(struct node*)malloc(sizeof(struct node));
    temp1=*head1;
    struct node* temp2;
    temp2=(struct node*)malloc(sizeof(struct node));
    temp2=*head2;
     
    while(temp1!=NULL && temp2!=NULL)
    {
        if(temp1->data!=temp2->data)
        {
            p=0;
            break;
        }
        if(temp1->next==NULL && temp2->next!=NULL)
        {
        	p=0;
        	break;
		}
		if(temp1->next!=NULL && temp2->next==NULL)
        {
        	p=0;
        	break;
		}
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return p;
}
int main()
{
	int n,i,t,k;
	struct node* head;
	head=(struct node*)malloc(sizeof(struct node));
	struct node* first;
	first=(struct node*)malloc(sizeof(struct node));
	head->data=1;
	head->next=NULL;
	first->data=1;
	first->next=NULL;
	//printf("%d\n",head->data);
	printf("Give your range\n");
	scanf( "%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&t);
			insert(&head,t);
	}
	show(head);
	printf("\nGive your range\n");
	scanf( "%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&t);
			insert(&first,t);
	}
	show(first);
	k=compare_lists(&head,&first);
	printf("\n%d",k);
	return 0;
	
}

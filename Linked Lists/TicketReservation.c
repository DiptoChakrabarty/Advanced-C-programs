#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node{
	char data[50];
	struct node *next;
};
void insert(struct node **head, char n[50])
{
	struct node* ne;
	ne=(struct node*)malloc(sizeof(struct node));
	//ne->data=n;
	strcpy(ne->data,n);
	ne->next=NULL;
	struct node* last;
	last=(struct node*)malloc(sizeof(struct node));
	if(*head==NULL)
	{
		*head=ne;
		return ;
	}
	else
	{
			
			last=*head;
	
	while(last->next!=NULL)
	{
		last=last->next;
	}
	last->next=ne;	
	}
	return ;
		
	
}
void show(struct node *head)
{
	struct node* ne;
	ne=(struct node*)malloc(sizeof(struct node));
	ne=head;
	printf("Passengers are : \n");
	while(ne!=NULL)
	{
		printf("%s\n",ne->data);
		ne=ne->next;
	}
	
}
void CheckPassenger(struct node* head,char k[])
{
	struct node* ne;
	ne=(struct node*)malloc(sizeof(struct node));
	ne=head;
	while(ne!=NULL)
	{
		if(strcmp(ne->data,k)==0)
		{
			printf("Ticket Reserved\n");
			return ;
			
		}
		ne=ne->next;
	}
	printf("Not Reserved\n");
	return ;
}
void DeletePassenger(struct node* head,char k[])
{
	struct node* last;
	last=(struct node*)malloc(sizeof(struct node));
	struct node* pre;
	pre=(struct node*)malloc(sizeof(struct node));
	last=head;
	if (last!= NULL && strcmp(last->data,k)==0) 
    { 
        head = last->next;   
        free(last);               
        return; 
    } 
	while(last!=NULL && strcmp(last->data,k)!=0)
	{
			pre=last;
			last=last->next;
				
	}
	pre->next=last->next;
	free(last);
}
int main()
{
	int n,i,k;
	char t[50],p[50];
	struct node* head=NULL;
	while(1>0)
	{
	
	printf("\nEnter Your Option\n1)Reserve Ticket\n2)Cancel Reservation\n3)Check Reservation\n4)Display Passengers\n5)Exit\n");
	scanf("\n%d",&k);
	if(k==1)
	{
			printf("Give your range\n");
		scanf( "%d",&n);
		printf("Enter Passenger Names\n");
		for(i=0;i<n;i++)
		{
		scanf("%s",&t);
			insert(&head,t);		
		}
	}
	if(k==4)
	{
		show(head);
	
	}
	if(k==3)
	{
		printf("Enter Passenger Name\n");
		scanf("%s",&p);
		CheckPassenger(head,p);
		
	}
	if(k==2)
	{
		printf("Enter Passenger Name\n");
		scanf("%s",&p);
		DeletePassenger(head,p);
		
		
	}
	if(k==5)
	{
		break;
	}
}

	
	
	
	return 0;
}

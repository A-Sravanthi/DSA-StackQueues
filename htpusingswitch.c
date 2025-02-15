#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* createnode(struct node* head)
{
	struct node *temp,*nn;
	temp=head;
	nn=(struct node*)malloc(sizeof(struct node));
	printf("enter the data:-");
	scanf("%d",&nn->data);
	nn->next=NULL;
	if(head==NULL)
	{
	temp=head=nn;
	}
	else
	{
	while(temp->next!=NULL)
	{
	temp=temp->next;
	}
	temp->next=nn;
          }
}
void display(struct node *head)
{
	struct node* temp=head;
	while(temp!=NULL)
	{
	printf("%d",temp->data);
	temp=temp->next;
	}
}
struct node* insert(struct node* head)
{
	struct node*temp,*nn;
	temp=head;
	printf("enter the data to be insert:\n");
	nn=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&nn->data);
	int n;
	printf("enter the position where we insert:\n");
	printf("enter 1 for head insertion\n 2 for tail insertion\n 3 for position insertion\n");
	scanf("%d",&n);
	int pos,i;
	switch(n)
	{
		case 1:
		
			nn->next=head;
			head=nn;
			break;
		
		case 2:
		
			temp=head;
			while(temp->next!=NULL)
			{
			temp=temp->next;
			}
			temp->next=nn;
			nn->next=NULL;
			break;
		
		case 3:
		          
			printf("enter the position for inserting:\n");
			scanf("%d",&pos);
			for(i=1;i<pos-1&&temp->next!=NULL;i++)
			{
			temp=temp->next;
			}
			nn->next=temp->next;
			temp->next=nn;
			break;
		
	}
	return head;
	
}
int main()
{
	struct node* head=NULL;
	int N;
	printf("enter the no.of elements:");
	scanf("%d",&N);
	while(N>0)
	{
		head=createnode(head);
		N--;
	}
	display(head);
	insert(head);
	display(head);
}






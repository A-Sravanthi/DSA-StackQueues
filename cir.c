#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=0;
void createnode()
{
	struct node *temp,*nn;
	nn=(struct node*)(malloc)(sizeof(struct node));
	printf("enter the nn data:");
	scanf("%d",&nn->data);
	nn->next=nn;
	if(head==0)
	{
	    temp=head=nn;
	}
	else{
		temp->next=nn;
		temp=nn;
		nn->next=head;
        }
}
void display()
{
	struct node *temp=head;
	while(temp->next!=head)
	{
	     printf("%d->",temp->data);
	temp=temp->next;
        }
        printf("%d",temp->data);
}
void main()
{
	int n;
	printf("enter the number nodes:\n");
	scanf("%d",&n);
	while(n>0)
	{
	          createnode();
	          n--;
	}
	display();
}



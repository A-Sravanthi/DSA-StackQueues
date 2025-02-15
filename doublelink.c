#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *pre;
	struct node *next;
	int data;
};
struct node *head=NULL;
struct node createnode()
{
	struct node *nn,*temp;
	nn=(struct node*)malloc(sizeof(struct node));
	printf("enter the data:");
	scanf("%d",&nn->data);
	nn->next=NULL;
	if(head==NULL)
	{
		head=nn;
		nn->pre=NULL;
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
		temp=temp->next;
		}
		temp->next=nn;
		nn->pre=temp;
        }
}
void display()
{
	struct node *temp;
	temp=head;
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}
}
void main()
{
        int n;
        printf("enter no.of nodes:");
	scanf("%d",&n);

        while(n>0)
		{
		createnode();
                n--;
		}
        display();
}

















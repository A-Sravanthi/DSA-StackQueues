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
void inserthead()
{
	struct node *nn,*temp;
	temp=head;
	nn=(struct node *)malloc(sizeof(struct node));
	printf("\nenter the insert ele:\n");
	scanf("%d",&nn->data);
	while(temp->next!=head)
	{
	temp=temp->next;
	}

	temp->next=nn;

	nn->next=head;
	head=nn;
}
void inserttail()
{
	struct node *nn,*temp;
	nn=(struct node *)malloc(sizeof(struct node));
	printf("\nenter the insert ele:\n");
	scanf("%d",&nn->data);
	while(temp->next!=head)
	{
	temp=temp->next;
	}

	temp->next=nn;

	nn->next=head;
}
void insertpos()
{
	struct node *nn,*temp;
	temp=head;
	nn=(struct node *)malloc(sizeof(struct node));
	printf("\nenter insert data:\n");
	scanf("%d",&nn->data);
	int pos,i;
	printf("enter the position:\n");
	scanf("%d",&pos);
	for(i=0;i<pos-1;i++)
	{
	temp=temp->next;
	}
	nn->next=temp->next;
	temp->next=nn;
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
        inserthead();
        display();
        inserttail();
        display();
        insertpos();
        display();
       
}



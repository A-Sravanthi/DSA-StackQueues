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
void inserttail()
{
	struct node *nn,*temp;
	nn=(struct node*)malloc(sizeof(struct node));
	printf("enter the tail data:\n");
	scanf("%d",&nn->data);
        nn->pre=NULL;
        nn->next=NULL;
	
	if(head==NULL)
             {
		head=nn=temp;
		
              }
	else{
	temp->next=nn;
	nn->pre=temp;
	temp=nn;
        }
}
void insertbeg()
{
	struct node *nn;
	nn=(struct node*)malloc(sizeof(struct node));
	printf("\nenter head the data:\n");
	scanf("%d",&nn->data);
        nn->pre=0;
        nn->next=0;
	
	if(head==0)
{
head=nn;}
	else{
	head->pre=nn;
	nn->next=head;
	head=nn;
	
	
        }
}
void insertpos()
{
	int pos,i,n;
	printf("enter the positin:\n");
	scanf("%d",&pos);
	if(pos<1&&pos>n)
	   printf("invalid position\n");
	else if(pos==1)
	   insertbeg();
	else
	{
		struct node *nn,*temp;
		temp=head;
		nn=(struct node*)malloc(sizeof(struct node));
		printf("\nenter the pos ele:\n");
		scanf("%d",&nn->data);
		while(i<pos-1)
		{
			temp=temp->next;
			i++;
		}
		nn->pre=temp;
		nn->next=temp->next;
		temp->next=nn;
		nn->next->pre=nn;
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
        inserttail();
        display();
        insertbeg();
         display();
        insertpos();
        display();
}

















#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *next;
	struct node *pre;
};
struct node *head=NULL;
struct node createnode()
{
	struct node *nn,*temp;
	nn=(struct node*)malloc(sizeof(struct node));
	printf("enter the new node data:");
	scanf("%d",&nn->data);
        nn->next=NULL;
	if(head==NULL)
        {
	       head=nn;
               nn->pre=NULL;
        }
	else{
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
		printf("%d<->",temp->data);
		temp=temp->next;
        }
}
void delhead()
{
	struct node *temp;
	temp=head;
	printf("delete node is:%d\n",temp->data);
	head=head->next;
	head->pre=NULL;
	temp->next=NULL;
}
void deltail()
{
	struct node *temp;
	temp=head;
	while(temp->next->next!=NULL)
	{
	  temp=temp->next;
	}
	printf("\ndelete tail node:%d\n",temp->next->data);
	temp->next=NULL;
	free(temp->next);
}
void delpos()
{
	struct node *temp;
	temp=head;
	int pos;
	printf("\ndelate position pleas:\n");
	scanf("%d",&pos);
	for(int i=0;i<pos-1;i++)
        {
            temp=temp->next;
	}
	temp->next=temp->next->next;
	temp->next->pre=temp->next;

}
void main()
{
	int n;
	printf("enter the no.of nodes:");
	scanf("%d",&n);
	while(n>0)
	{
	createnode();
	n--;
	}
        delhead();
        display();
        deltail();
        display();
        delpos();
        display();
}


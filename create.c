#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
 
  struct node createnode()
 {
   struct node *nn,*temp;
   nn=(struct node*)malloc(sizeof(struct node));
   printf("entert the data:");
   scanf("%d",&nn->data);
   nn->next=NULL;
   if(head==NULL)
   {  
     head=nn;
   }
   else 
   {
     temp=head;
    while(temp->next!=NULL)
     {
      temp=temp->next;
     }
     temp->next=nn;
    } 

 }
void Display()
{
   struct node *temp;
   temp=head;
   while(temp!=NULL)
   {
   printf("%d->",temp->data);
   temp=temp->next;
   }
}
void hinsert()
{
	struct node *nn;
	nn=(struct node*)malloc(sizeof(struct node));
        printf("enter the insert ele:");
        scanf("%d",&head->data);
       
	if(head!=NULL)
	{
		nn->data=head->data;
		nn->next=head;
		 head=nn;
        }
	else
	head=nn;

}
void tinsert() 
{
	struct node *nn,*temp;
	nn=(struct node*)malloc(sizeof(struct node));
	printf("enter the tinsert ele:");
        scanf("%d",&head->data);
	if(head!=NULL)
	head=nn;
	else
	temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
		temp->next=nn;
	}
}	       

void main()
{
	int n;
	printf("enter the number node:");
	scanf("%d",&n);
	while(n>0)
	{
		createnode();
		n--;
	}

	hinsert();
	tinsert();
	Display();
}

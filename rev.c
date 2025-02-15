#include<stdio.h>
#include<stdlib.h>
struct node *createnode(int val);
void Display();
struct node
{
	int data;
	struct node *next;
};
struct node *head;
void insert_tail(int val);
struct node rev();
void main(){
	int a,n,i;
	printf("enter:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a);
	insert_tail(a);
	}
	rev();
	Display(head);
	
}
struct node rev()
{
	struct node *temp,*current,*prev;
	
       
current=head;
	prev=NULL;
	temp=NULL;
	while(current!=NULL)
	{
	temp=current->next;
	current->pre=next;
	current->next=prev;
	prev=current;
	current=temp;
	}
        return prev;
}


void insert_tail(int val){
	struct node *nn,*temp;
	nn=createnode(val);
	if(head==NULL)
	head=nn;
	else
	{
	temp=head;
	while(temp->next!=NULL)
	temp=temp->next;
	temp->next=nn;
	}}
	struct node *createnode(int val)
	{
	struct node *nn;
	nn=(struct node*)malloc(sizeof(struct node));
	nn->data=val;
	nn->next=NULL;
	return nn;
}
void Display()
{
	struct node *temp;
	temp=head;
	printf("tail_list\n");
	while(temp!=NULL){

	printf("%d->",temp->data);
	temp=temp->next;
}
}

#include<stdio.h>
#include<stdlib.h>
struct node *createnode(int val);
struct node{
    int data;
     struct node *next;
};
struct node *head;
void Display(struct node *head);
void insert_t(int val);
void insert_h(int val);

void main()
{
	char i;
	int j,n,a;
	printf("enter:");
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
	scanf("%d",&a);
	insert_h(a);
	}
	printf("enter head or tail:");
	scanf("%c",&i);
	if(i=='t')
	insert_t(50);
	else
	insert_h(50);
	Display(head);
	}
void insert_t(int val){
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
void insert_h(int val){
	struct node *nn;
	nn=createnode(val);
	if(head==NULL)
	head=nn;
	else
	nn->next=head;
	head=nn;
	}
struct node *createnode(int val)
{
	struct node *nn;
	nn=(struct node*)malloc(sizeof(struct node));
	nn->data=val;
	nn->next=NULL;
	return nn;
	}
void Display(struct node *head)
{
	while(head!=NULL){

	printf("%d\n",head->data);
	head=head->next;
}}

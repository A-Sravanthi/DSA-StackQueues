#include<stdio.h>
#include<stdlib.h>
struct node *createnode(int val);
struct node{
int data;
struct node *next;
};
struct node *head;
void Display(struct node *head);
void insert_mid(int val);
int main()
{

head=createnode(10);
head->next=createnode(20);
head->next->next=createnode(30);
head->next->next->next=createnode(40);
insert_mid(10000);
Display(head);
}
void insert_mid(int val)
{
//temp=head;
int i,pos;
struct node *nn,*temp;
temp=head;
printf("enter position");
scanf("%d",&pos);
while(i<pos-1)
{
temp=temp->next;}
nn=createnode(val);
if(head==NULL)
head=nn;
else
nn->next=temp->next;
temp->next=nn;
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

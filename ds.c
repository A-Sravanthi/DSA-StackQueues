#include<stdio.h>
#include<stdlib.h>
struct node *createnode(int val);
void Display(struct node *head);
struct node{
int data;
struct node *next;
};
struct node *head;
void insert_tail(int val);
void del_spc();

void main(){
int a,n,i;
printf("enter:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a);
insert_tail(a);
}
del_spc();
Display(head);
}
void del_spc()
{
struct node *temp;
temp=head;
int pos,i;
printf("enter the position:");
scanf("%d",&pos);
for(i=0;i<pos-1;i++)
{
temp=temp->next;}
//d=temp->next;
printf("delete node is %d:",temp->next->data);
temp->next=temp->next->next;
//temp->next->next=NULL;
//free(temp->next);
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
void Display(struct node *head)
{
printf("tail_list\n");
while(head!=NULL){

printf("%d->",head->data);
head=head->next;
}}

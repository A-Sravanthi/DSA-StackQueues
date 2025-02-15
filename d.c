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
void delete_tail()
{
struct node *temp=head;
while(temp->next->next!=NULL)
{
temp=temp->next;
}
free(temp->next->next);
temp->next=NULL;
}


void main(){
int a,n,i;
printf("enter:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a);
insert_tail(a);
}
delete_tail();
Display(head);
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

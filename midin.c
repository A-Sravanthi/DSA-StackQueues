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
void insert_mid(int val);

void main(){
int j,n,a;
printf("enter no of nodes:");
scanf("%d",&n);
for(j=0;j<n;j++)
{
scanf("%d",&a);
insert_tail(a);
}
insert_mid(50);
Display(head);

}
void insert_mid(int val)
{

int i,pos;
struct node *nn,*temp;
temp=head;
printf("\nenter position\n");
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
i++;
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
while(head!=NULL){

printf("%d\n",head->data);
head=head->next;
}}

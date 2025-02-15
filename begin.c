#include<stdio.h>
#include<stdlib.h>
struct node *createnode(int val);
void Display(struct node *head);
struct node{
int data;
struct node *next;
};
struct node *head;
void insert_b(int val);

void main(){
int a,n,i;
printf("enter:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a);
insert_b(a);
}
Display(head);
}
void insert_b(int val){
struct node *nn;
nn=createnode(val);
if(head!=NULL)
{
nn->data=val;
nn->next=head;
head=nn;
}
else
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
printf("begining insertion\n");
while(head!=NULL){

printf("%d\n",head->data);
head=head->next;
}}

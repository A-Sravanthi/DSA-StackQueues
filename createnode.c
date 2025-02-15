#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *head=NULL;
struct node *createnode(int val)
{
struct node *nn;
nn=(struct node*)malloc(sizeof(struct node));
nn->data=val;
nn->next=NULL;
}
void Display()
{
while(head!=NULL)
{
printf("%d",head->data);

head=head->next;
}}
int main()
{
int n,i,a;
printf("");
scanf("%d",&n);
printf("");
for(i=0;i<n;i++)
{
scanf("%d",&a);
createnode(a);
}
Display();
}



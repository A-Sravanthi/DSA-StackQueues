#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *next;
	struct node *pre;
};
struct node *head=NULL;
void inserttail()
{
	struct node *nn,*temp;
	nn=(struct node*)malloc(sizeof(struct node));
	printf("enter the data");
	scanf("%d",&nn->data);
        nn->pre=NULL;
        nn->next=NULL;
	
	if(head==NULL)
             {
		head=nn=temp;
		
              }
	else{
	temp->next=nn;
	
	nn->pre=temp;
	temp=nn;
	
	
        }
}

void display()
{
	struct node *temp;
	temp=head;
	while(temp!=NULL)
	{
		printf("%d-",temp->data);
		temp=temp->next;
	}
}
int main()
{
	int n;
	printf("enter the no.of nodes:");
	scanf("%d",&n);
        while(n>0)
        {
	inserttail();
        n--;
        
	display();
        }
}

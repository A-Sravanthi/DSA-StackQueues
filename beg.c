#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *next;
	struct node *pre;
};
struct node *head=0;
void insertbeg()
{
	struct node *nn,*temp;
	nn=(struct node*)malloc(sizeof(struct node));
	printf("enter the data");
	scanf("%d",&nn->data);
        nn->pre=0;
        nn->next=0;
	
	if(head==0)
          	
              }
	else{
	temp=head;
	temp->pre=nn;
	nn->next=temp;
	temp=nn;
	
	
        }

}
   {
		head=nn;
	
void display()
{
	struct node *temp;
	temp=head;
	while(temp!=0)
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
	insertbeg();
        n--;
        }
        
	display();

} 


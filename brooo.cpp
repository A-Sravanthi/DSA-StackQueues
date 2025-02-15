#include<iostream>
using namespace std;
class node{
public:
int data;
node* next;
node(int val)
{
data=val;
next=NULL;
}
};
node* createnode(node* head,int val)
{
	node*temp;
	node*nn=new node(val);
	if(head=NULL)
	{
		head=nn;
		nn->next=head;
	}
	else
	{
		temp=head;
		while(temp->next!=head)
			{
			temp=temp->next;
			}
		temp->next=nn;
		nn->next=head;
	}
	return head;
}
node* insertion(node* &head)
{
	node*nn,*temp=head;
	int val;
	cout<<"enter the insertion data:"<<endl;
	cin>>val;
	nn=new node(val);
	cout<<"select 1/2/3"<<endl;
	int ch;
	cin>>ch;
	switch(ch)
	{
		case 1:
			nn->next=head;
			temp->next=nn;
			head=nn;
			break;
		case 2:
			while(temp->next!=NULL)
			{
			temp=temp->next;
			}
			temp->next=nn;
			nn->next=head;
		          break;
		case 3:
			int p;
			cout<<"\nenter the insert position:";
			cin>>p;
			for(int i=0;i<p-1;i++)
			{
			temp=temp->next;
			}
			nn->next=temp->next;
			temp->next=nn;
			break;
	}
	return head;
}	
node* deletion(node* &head)
{
	node*temp=head;
	int ch;
	cout<<"select 1/2/3 "<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1:
		while(temp->next!=NULL)
		{
		temp=temp->next;
		}
		temp->next=head->next;
		head=head->next;
		case 2:
		while(temp->next->next!=NULL)
		{
		temp=temp->next;
		}
                    temp->next=head;
                    case 3:
                    int p;
		cout<<"enter the delete position:";
		cin>>p;
		for(int i=0;i<p-1;i++)
		{
		temp=temp->next;
		}
		temp->next=temp->next->next;
           }
           return head;
}
void display(node*head)
{
	node* temp=head;
	while(temp->next!=head)
	{
	cout<<temp->data<<"->";
	temp=temp->next;
	}
	cout<<temp->data;
}
int main()
{
	int n,val;
	node* head=NULL;
	cout<<"enter the no.of elements:"<<endl;
	cin>>n;
	cout<<"enter "<<n<<"  elements"<<endl;
	while(n>0)
	{
	cin>>val;
	head=createnode(head,val);
	n--;
	}
	display(head);
	cout<<endl;
	head=insertion(head);
	display(head);
	head=deletion(head);
	display(head);
}










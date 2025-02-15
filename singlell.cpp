#include<bits/stdc++.h>
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
void inserT(node* &head)
{
	int val;
	node*nn,*temp;
	temp=head;
	nn=new node(val);
	cout<<"enter the insert data:"<<endl;
	cin>>nn->data;
	if(head==NULL)
		{
		head=nn;
		}
	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
		temp=temp->next;
		}
		temp->next=nn;
	}
}
void inserthead(node* &head)
{
	node* temp=head,*nn;
	int val;
	nn=new node(val);
	cout<<"\nenter the head insert data:";
	cin>>nn->data;
	if(head==NULL)
	          head=nn;
	else
		{
		nn->next=head;
		head=nn;
		}
}
void position(node* &head)
{
	int val,pos;
	cout<<"\nenter the insert position:";
	cin>>pos;
	node*temp=head,*nn;
	nn=new node(val);
	cout<<"\nenter the head insert data:";
	cin>>nn->data;
	if(head==NULL)
	          head=nn;
	{
		for(int i=0;i<pos-1;i++)
		{
		temp=temp->next;
		}
		nn->next=temp->next;
		temp->next=nn;
	}
}
void delhead(node* &head )
{
node* temp=head;
temp=head->next;
head=temp;
cout<<"\ndelete head data \n";
}




void deltail(node* head)
{
	node* temp=head;
	while(temp->next->next!=NULL)
	{
	temp=temp->next;
	}
	cout<<"deleted tail data is: "<<temp->next->data<<endl;
	temp->next=NULL;
}
void delposition(node* head)
{
int p;
cout<<"enter the delete position:";
cin>>p;
node*temp=head;
for(int i=0;i<p-1;i++)
{
temp=temp->next;
}
temp->next=temp->next->next;

}


void display(node* &head)
{
	node* temp=head;
	while(temp!=NULL)
	{
	cout<<temp->data<<"->";
	temp=temp->next;
	}
}
int main()
{
	node* head=NULL;
	int n;
	cout<<"enter the no.of elements:-"<<endl;
	cin>>n;
	for(int i=n;i>0;i--)
	{
	inserT(head);
	}
	display(head);
	inserthead(head);
	display(head);
	position(head);
	display(head);
	cout<<endl;
	deltail(head);
	display(head);
	delhead(head);
	cout<<endl;
	display(head);
	delposition(head);
	display(head);
	return 0;
}












#include<iostream>
using namespace std;
class node{
public:
int data;
node* pre;
node* next;
node(int val)
{
data=val;
pre=NULL;
next=NULL;
}
};
node* create(node* head,int val)
{
	node*nn=new node(val);
	if(head==NULL)
	head=nn;
	else
	{
	node *temp=head;
	while(temp->next!=NULL)
	{
	temp=temp->next;
	}
	temp->next=nn;
	nn->pre=temp;
	}
	return head;
}
node* insertion(node* &head)
{
	int val;
	cout<<"enter the insertion data:-"<<endl;
	cin>>val;
	node *nn,*temp=head;
	nn=new node(val);
	cout<<"select 1/2/3"<<endl;
	int ch;
	cin>>ch;
	switch(ch)
	{
		case 1:
			temp=head;
			nn->next=temp;
			head->pre=nn;
			head=nn;
			break;
		case 2:
			temp=head;
			while(temp->next!=NULL)
			{
			temp=temp->next;
			}
			temp->next=nn;
			nn->pre=temp;
			break;
		case 3:
			temp=head;
			int p;
			cout<<"enter the position for data:"<<endl;
			cin>>p;
			for(int i=0;i<p-1;i++)
			{
			temp=temp->next;
			}
			nn->next=temp->next;
			temp->next->pre=nn;
			nn->pre=temp;
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
			head=head->next;
			head->next->pre=NULL;
			break;
		case 2:
			while(temp->next->next!=NULL)
			{
			temp=temp->next;
			}
			temp->next=NULL;
			break;
		case 3:
			int p;
			cout<<"enter delete position:"<<endl;
			cin>>p;
			for(int i=0;i<p-1;i++)
			{
			temp=temp->next;
			}
			temp->next=temp->next->next;
			temp->next->next->pre=temp;
			break;
	}
	return head;
}




void display(node* &head)
{
	node* temp=head;
	while(temp!=NULL)
	{
	cout<<temp->data<<"<->";
	temp=temp->next;
	}
}
int main()
{
	int n,val;
	node* head=NULL;
	cout<<"enter the no.of elements:"<<endl;
	cin>>n;
	cout<<"enter"<<n<<"elements"<<endl;
	while(n>0)
	{
	cin>>val;
	head=create(head,val);
	n--;
	}
	display(head);
	cout<<endl;
	head=insertion(head);
	display(head);
	head=deletion(head);
	display(head);
}






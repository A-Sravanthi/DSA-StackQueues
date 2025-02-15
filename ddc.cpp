#include<iostream>
using namespace std;
class node{
public:
	int data;
	node *pre;
	node *next;
	node(int val)
	{
		data=val;
		next=0;
		pre=0;
}
};
void inserttail(node* &head,int val)
{
	
	node *n=new node(val);
	if(head==NULL)
	{
	head=n;
        return;
	}
        node *temp=head;
	while(temp->next!=NULL)
	{
	        temp=temp->next;
	}
	temp->next=n;
	n->pre=temp;
}
void inserthead(node* &head,int val)
{
	node *n=new node(val);
	n->next=head;
	if(head!=NULL)
	{
	head->pre=n;
	}
	head=n;
}
void insertpos(node* head,int val)
{
	node *temp=head;
	node *n=new node(val);
	int pos;
	cout<<"enter the position";
	cin>>pos;
	for(int i=0;i<pos-1;i++)
	{
	temp=temp->next;
	}
	n->next=temp->next;
	temp->next->pre=n;
	temp->next=n;
	n->pre=temp;
}
void delhead(node *head)
{
	node *temp=head;
	head=head->next;
	head->pre=NULL;
	delete temp;
}
void delpos(node* head)
{
	int pos;
	cout<<"enter the pos\n";
	cin>>pos;
	if(pos==1)
	{
	delhead(head);
	return;
	}
	node* temp=head;
	int count=1;
	while(temp!=NULL&&count!=pos)
	{
		temp=temp->next;
		count++;
	}
	temp->pre->next=temp->next;
	if(temp->next!=NULL)
                {
		temp->next->pre=temp->pre;
		}
	delete temp;
}
void deltail(node* head)
{
	node *temp=head;
	while(temp->next->next!=NULL)
	{
	temp=temp->next;
	}
	temp->next=NULL;
}


void display(node* &head)
{
	node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"0"<<endl;
}
int main()
{
	node* head=NULL;
	inserttail(head,1);
	inserttail(head,10);
	inserttail(head,100);
	inserttail(head,1000);
	inserttail(head,10000);
	inserttail(head,100000);
	display(head);
        inserthead(head,5);
        display(head);
        insertpos(head,500);
        display(head);
        delpos(head);
        display(head);
        deltail(head);
        display(head);
	return 0;
}














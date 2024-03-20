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
node* push(node*top,int val)
{
node* temp=top;
node*n;
n=new node(val);
n->next=top;
top=n;
//cout<<top->data;
return top;
}
node*pop(node*top)
{
if(top==NULL)
{
cout<<"stack underfloe:";
}
else
{
node* temp=top;
top=temp->next;
delete(temp);
}
return top;

}
void peek(node*top)
{
if(top==NULL)
{
cout<<"no elements:";
}
cout<<top->data<<endl;
}
int main()
{
node*top=NULL;
int k,val;
cout<<"enter the no.of elements:\n";
cin>>k;
while(k>0)
{
cin>>val;
top=push(top,val);
k--;
}
cout<<"top of element is";
peek(top);
top=pop(top);
cout<<"top of element is";
peek(top);
top=pop(top);
cout<<"top of element is";
peek(top);
return 0;
}













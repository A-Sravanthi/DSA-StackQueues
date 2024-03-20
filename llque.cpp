#include<bits/stdc++.h>
using namespace std;
class node{
public:
int data;
node *next;
node(int val)
{
data=val;
next=0;
}
};
class Queue{
node* front;
node* back;
public:
Queue(){
front=0;
back=0;
}
void push(int x)
{
node *n=new node(x);
if(front==0)
{
back=n;
front=n;
return;
}
back->next=n;
back=n;
}
void pop()
{
if(front==0)
{
cout<<"queue is underflow"<<endl;
return;
}
node *todelete=front;
front=front->next;
delete todelete;
}
int peek()
{
if(front==0)
{
cout<<"no elements in queue"<<endl;
return 1; 
}
return front->data;
}
bool empty(){
if(front==0)
{
return true;
}
return false;
}
};
int main()
{
Queue q;
q.push(1);
q.push(12);
q.push(13);
q.push(14);
q.push(15);
cout<<q.peek()<<endl;
q.pop();
cout<<q.peek()<<endl;
q.pop();
cout<<q.peek()<<endl;
q.pop();
cout<<q.peek()<<endl;
q.pop();
cout<<q.empty()<<endl;
return 0;
}









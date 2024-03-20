#include<bits/stdc++.h>
using namespace std;
#define n 20
class Queue{
public:
int *arr;
int front;
int back;
Queue(){
arr=new int[n];
front=-1;
back=-1;
}
void push(int x)
{
if(back==n-1)
{
cout<<"queue is overflow"<<endl;
return;
}
back++;
arr[back]=x;
if(front==-1)
{
front++;
}
}
void pop()
{
if(front==-1 || front>back)
{
cout<<"no elements in queue"<<endl;
}
front++;
}
int peek()
{
if(front==-1 || front>back)
{
cout<<"no elements in queue"<<endl;
return -1;
}
return arr[front];
}
bool empty()
{
if(front==-1 || front>back)
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














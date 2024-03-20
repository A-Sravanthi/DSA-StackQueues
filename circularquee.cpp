#include<bits/stdc++.h>
using namespace std;

class cqueue{

    int *arr;
    int front;
    int rear;
    int size=100;

    cqueue()
    {
        arr=new int[size];
        front=-1;
        rear=-1;
    }

    void enqueue(int val)
    {
        //to check whethe  queue is full
        if(rear==size-1&&front==0||(rear==(front-1)%(size-1)))
        {
            cout<<"Queue is full"<<endl;
        }
        else if(front==-1)//first element came to be pushed
        {
            rear=front=0;//single element
            arr[rear]=val;
        }
        else if(rear==size-1&&front!=0)//for bringing to the first
        {
            rear=0;//to maitain cyclic nature
            arr[rear]=val;
        }
        else//normal case
        {
            rear++;
            arr[rear]=val;
        }
    }
    
    void dequeue()
    {
        //to check whether queue is empty
        if(front==-1)
        {
           cout<<"Queue underflow"<<endl;
        }
        else if(front==rear)//single element
        {
                cout<<arr[front]<< " is popped out"<<endl;
                arr[front]=-1;
                rear=front=-1;
        }
        else if(front==size-1)//to maintain cyclic nature
        {
            cout<<arr[front]<< " is popped out"<<endl;
            arr[front]=-1;
            front=0; //to maitain cyclic nature   
        }
        else{
            cout<<arr[front]<< " is popped out"<<endl;
            arr[front]=-1;
            front++;//normal case
        }
    }
     
};
int main()
{
cqueue q;
int n,i;
cout<<"enter the numner of elements";
cin>>n;
cout<<"eter the  push elements";
while(n>0)
{
cin>>i;
q.cqueue(i);
n--;
}
//cout<<"deleted element is"<<dequeue()<<endl;


    
 
}






























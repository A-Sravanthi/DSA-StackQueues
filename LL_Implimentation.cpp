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

class Queue{
    public:
    node* front;
    node* rear;

    Queue()
    {
        front=NULL;
        rear=NULL;
    }

    void enQueue(int val)
    {
        node* nn=new node(val);
        if(rear==NULL)
        {
            rear=nn;
            front=rear;
        }
        else{
            rear->next=nn;
            rear=nn;
        }
    }

    void deQueue()
    {
        node* temp=front;
        if(front==NULL)
        {
            cout<<"Queue underflow"<<endl;
            return;
        }
        front=front->next;
        delete(temp);
        temp=NULL;
    }

    bool empty()
    {
        if(front==NULL)
        return 1;
        else return 0;
    }

    int top()
    {
        if(!empty())
        {
            return front->data;
        }
        else
        cout<<"There are no elements in Queue"<<endl;
    }

    void display()
    {
        if(front==NULL)
        cout<<"Queue is NULL"<<endl;
        else
        {
            node* temp=front;
            while(temp!=NULL)
            {
                cout<<temp->data<<" ";
                temp=temp->next;
            }
            cout<<endl;
        }
    }
};

int main()
{
    
    Queue q;
    q.enQueue(4);
    q.display();
    q.enQueue(5);
    q.enQueue(6);
    q.deQueue();
    q.top();
    q.display();
    cout<<q.empty();
 
}

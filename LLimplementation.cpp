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
class Stack{
    public:
    node* head;
    node* tail;

    Stack()
    {
        head=NULL;
        tail=NULL;
    }

    void push(int val)
    {
        if(head==NULL)
        {
            head=new node(val);
            tail=head;
            cout<<"element "<<val<<" is pushed into stack"<<endl;
        }
        else
        {
            tail->next=new node(val);
            tail=tail->next;
            cout<<"element "<<val<<" is pushed into stack"<<endl;

        }
    }

    void pop()
    {
        if(head==NULL)
        cout<<"Stack underflow"<<endl;
        else if(head->next==NULL)
        {
           cout<<"element "<<tail->data<<" is popped out of stack"<<endl;
           head=NULL;
           tail=NULL;   
        }
        else
        {
            cout<<"element "<<tail->data<<" is popped out of stack"<<endl;
            node* a=head;
            while(a->next!=NULL)
            {
                a=a->next;
            }
            tail=a;
            delete(a->next);
            tail->next=NULL;
        }
    }
    void peak()
    {
        if(head!=NULL)
        {
            cout<<head->data<<" is the top of the stack"<<endl;
        }
        else
        cout<<"Stack is empty"<<endl;
    }
    bool isempty()
    {
        if(head==NULL)
        return 1;
        else return 0;
    }
};
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    Stack s;
    s.push(4);
    s.push(2);
    s.push(1);
    s.pop();
    cout<<s.isempty()<<endl;
    s.pop();
    cout<<s.isempty()<<endl;
    s.pop();
    cout<<s.isempty()<<endl;
 
}
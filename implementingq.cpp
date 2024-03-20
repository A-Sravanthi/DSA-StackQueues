#include<bits/stdc++.h>
using namespace std;

class Queue{
    public:

    int *arr;
    int front;
    int rear;

    int size=100;
    Queue()
    {
        arr=new int[size];
        front=0;
        rear=0;
    }

    bool isempty()
    {
        if(rear==front)
        return true;
        else return false;
    }

    void enqueue(int val)
    {
        if(rear<=size)
        {
            
            arr[rear]=val;
            rear++;
            //cout<<arr[rear];
        }
        else
        cout<<"Queue overflow"<<endl;
    }

    void dequeue()
    {
        if(front<rear)
        {
            cout<<arr[front]<<" is popped out of the queue"<<endl;
            arr[front]=-1;
            front++;
            if(front==rear)
            {
                front=0;
                rear=0;
            }
        }
        else
        cout<<"Queue underflow"<<endl;
    }

    void top()
    {
        if(front<rear)
        cout<<arr[front]<<endl;
        else
        cout<<"there is no element in the queue"<<endl;
    }

};
int main()
{
  
    Queue q;
    q.enqueue(5);
    q.dequeue();
   q.top();
    q.enqueue(6);
    q.enqueue(8);
    q.top();
    cout<<q.isempty()<<endl;
    q.top();
    q.dequeue();
    
    
    q.top();
 
}

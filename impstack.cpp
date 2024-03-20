#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
    int *arr;
    int top;
    int size;

    
    Stack (int s)
    {
        size=s;
        arr=new int[size];
        top=-1;
    }

    void push(int val)
    {
        if(top<size)
        {
            top++;
            arr[top]=val;
        }
        else
        {
            cout<<"Stack overflow"<<endl;
        }
    }

    void pop()
    {
        if(top>=0)
        top--;
        else
        {
            cout<<"Stack underflow"<<endl;
        }
    }

    void peak()
    {
        if(top>=0)
        {
            cout<<arr[top]<<endl;;
        }
        else
        {
            cout<<"Stack is empty"<<endl;
        }
    }
    void isEmpty()
    {
        if(top>=0)
        {
            cout<<"Stack is not empty"<<endl;
        }
        else
        {
            cout<<"Stack is empty"<<endl;
        }
    }


};
int main()
{
   

    Stack s(6);

    s.push(5);
    s.push(8);

    s.peak();

    s.isEmpty();
    s.pop();
    s.peak();
    s.pop();
    s.peak();
    s.isEmpty();
    
}

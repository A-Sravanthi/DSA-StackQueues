#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
    char *arr;
    int size;
    int top;

    Stack (int s)
    {
        size=s;
        arr=new char[size];
        top=-1;
    }

    void push(char a)
    {
        if(top<size)
        {
            top++;
            arr[top]=a;
        }
        else
        {
            cout<<"Stack overflow"<<endl;
        }
    }
    void pop()
    {
        if(top>=0)
        {
            top--;
        }
        else
        {
            cout<<"Stack underflow"<<endl;
        }
    }
    void peak()
    {
        if(top>=0)
        {
            cout<<arr[top]<<endl;
        }
        else{
            cout<<"stack is empty"<<endl;
        }
    }
};
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    Stack s(5);
    s.push('a');
    s.push('b');
    s.push('c');
    s.push('d');
    s.push('e');

    for(auto i=0;i<5;i++)
    {
        s.peak();
        s.pop();
        
    }

    
}
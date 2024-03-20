#include<bits/stdc++.h>
using namespace std;

class sta{
    public:
    queue<int> a;
    int size;
    sta()
    {
        size=0;
    }

    void push(int val)
    {
        a.push(val);
    }

    void pop()
    {
        if(!a.empty())
        {
            cout<<a.back()<<endl;
        }
        else
        cout<<"Stack underflow"<<endl;
    }

    void top()
    {
    if(a.empty())
    {
        cout<<"stack underflow"<<endl;
   } 
   else
        cout<<a.back()<<"is top"<<endl;
    
   
    }

    bool isempty()
    {
        if(a.empty())
        return true;
        else return false;
    }
    void display()
    {
       queue<int> v=a;
        while(!v.empty())
        {
            cout<<v.front()<<endl;
            v.pop();
        }
    }
};

int main()
{
   
    sta s;
    s.push(3);
    s.push(2);
    s.push(5);
    s.display();
    //cout<<s.top()<<" is top element"<<endl;
    s.pop();
    s.top();
    s.top();
    s.pop();
   s.display();
}
//implement Queue using


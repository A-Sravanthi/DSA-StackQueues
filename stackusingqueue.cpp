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

    int top()
    {
    if(!a.empty())
    {
        return a.front();
    }
    else cout<<"stack underflow"<<endl;
    }

    bool isempty()
    {
        if(a.empty())
        return true;
        else return false;
    }
    void display()
    {
        while(!a.empty())
        {
            cout<<a.front()<<endl;
            a.pop();
        }
    }
};

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    sta s;
    s.push(3);
    s.push(2);
    s.push(5);
    s.display();
    cout<<s.top()<<" is top element"<<endl;
    s.pop();
    
    cout<<s.top()<<" is top element"<<endl;
   // display(s);
}

#include<bits/stdc++.h>
using namespace std;

void insertatbottom(stack<int> &s,int count,int size,char a)
{
    if(count==size)
    {
        s.push(a);
        return;
    }

    char ch=s.top();
    s.pop();
    insertatbottom(s,count+1,size,a);
    s.push(ch);
}
void display(stack<int> a)
{
    while(!a.empty())
    {
        cout<<a.top()<<" ";
        a.pop();
    }
    cout<<endl;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    stack<int> num;
    num.push(9);
    num.push(4);
    num.push(4);
    num.push(0);
    num.push(8);
    num.push(8);
    num.push(8);
    num.push(5);
    num.push(0);
    
    display(num);

    int n=num.size();
    int count=0;
   // insertatbottom(num,count,n,7);

    display(num);

  
}
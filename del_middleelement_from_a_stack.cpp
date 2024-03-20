#include<bits/stdc++.h>
using namespace std;

void delmidelement(stack<char> &s,int count,int size)
{
    if(count==size/2)
    {
        s.pop();
        return;
    }

    char ch=s.top();
    s.pop();
    delmidelement(s,count+1,size);
    s.push(ch);
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    string str="abc";
    int n=str.size();
    stack<char> s;
    for(auto i:str){
        s.push(i);
    }

    int count=0;
    delmidelement(s,count,n);

    while(!s.empty())
    {
        cout<<s.top();
        s.pop(); 
    }
}
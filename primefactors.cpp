#include<bits/stdc++.h>
using namespace std;


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    stack<int> s;
    int n=6;
    //cin>>n;
    int i=2;
    while(n!=1)
    {
        while(n%i==0){
        s.push(i);
        n=n/i;
        }
        i++;
    }
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}
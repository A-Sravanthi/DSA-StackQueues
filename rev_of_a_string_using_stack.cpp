#include<bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    string str="reversedstring";

    stack<char> s;
    string ans="";

    for(auto i=0;i<str.length();i++)
    {
        s.push(str[i]);
    }

    while(!s.empty())
    {
        ans.push_back(s.top());
        s.pop();    
    }

    cout<<ans<<endl;
}
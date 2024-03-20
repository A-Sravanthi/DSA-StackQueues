#include<bits/stdc++.h>
using namespace std;

bool balancedexpression(string s)
{
    stack<char> st;
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == '(' || s[i] == '{' || s[i]=='[')
        {
            st.push(s[i]);
        }
        else if(s[i]==')')
        {
            if(!st.empty() && st.top()=='(')
            {
                st.pop();
            }
            else
            return false;
        }
        else if(s[i]=='}')
        {
            if(!st.empty() && st.top()=='{')
            {
                st.pop();
            }
            else
            return false;
        }
        else if(s[i]==']')
        {
            if(!st.empty() && st.top()=='[')
            {
                st.pop();
            }
            else
            return false;
        }

    }
    if(st.empty())
    return true;
    else return false;

}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    string s;
    cin>>s;

    cout<<balancedexpression(s);
 
}
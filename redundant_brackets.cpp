#include<bits/stdc++.h>
using namespace std;
bool solve(string s)
{
    stack<int>st;
    for(int i=0;i<s.size();i++)
    {
        char ch=s[i];
        if(ch=='('||ch=='+'||ch=='-'||ch=='*'||ch=='/')
        st.push(ch);
        else
        {
            if(ch==')')
            {
            bool isredundant=true;
            while(st.top()!='(')
            {
                char top=st.top();
                if(top=='+'||top=='-'||top=='*'||top=='/')
                isredundant=false;
                 st.pop();
            }
            if(isredundant==true)
            return true;
            st.pop();
            }
            
        }

    }
    return false;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    string s;
    cin>>s;

    cout<<solve(s);
 
}
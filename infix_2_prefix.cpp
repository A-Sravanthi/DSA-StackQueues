/*
1.reverse the given string and apply the same logic as did for postfix
just change ')' to '(' and '(' to ')' and finally return the reverse answer
*/
#include<bits/stdc++.h>
using namespace std;

int prec(char c)
{
    if(c=='^')return 3;
    else if(c=='*' || c=='/')return 2;
    else if(c=='+' || c=='-')return 1;
    else return -1;
}

string infixtopostfix(string s)
{
    reverse(s.begin(),s.end());
    stack<char> st;
    string res;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z')
        res.push_back(s[i]);
        
        else if(s[i]==')')
        st.push(s[i]);

        else if(s[i]=='(')
        {
            while(!st.empty() && st.top()!=')')
            {
                    res+=st.top();
                    st.pop();
            }if(!st.empty())
            st.pop();//for popping up the openig bracket
        }
        else {  
            while(!st.empty() && prec(st.top()) > prec(s[i]) )
            {
                res+=st.top();
                st.pop();
            }
            //we will push our curr operator into stack
            st.push(s[i]);
        }
    }
     //for checking whether any thing left in stack
    while(!st.empty())
    {
       res+=st.top();
       st.pop();
    }
        reverse(res.begin(),res.end());
    return res; 
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    string s="2+5";
    string ans=infixtopostfix(s);
    cout<<ans;
 
}

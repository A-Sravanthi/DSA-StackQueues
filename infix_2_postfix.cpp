/*
1.if operand push into string 
2.if '(' push in to stack
3. if ')' pop and push all the elements till u get '('
4.if operator pop from stack and push into string until
an operator  with less precedence is found . after findind push 
the cur operator in to stack
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
    stack<char> st;
    string res;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='0' && s[i]<='9')
        res.push_back(s[i]);
        
        else if(s[i]=='(')
        st.push(s[i]);

        else if(s[i]==')')
        {
            while(!st.empty() && st.top()!='(')
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

    return res; 
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    string s="(7-5/4)*(2-1-5)";
    string ans=infixtopostfix(s);
    cout<<ans;
 
}
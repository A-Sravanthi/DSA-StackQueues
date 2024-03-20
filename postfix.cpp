/*
1.Read the string from left to right
2.If u encounter the char is an operand just push it by making it int
  in to the stack 
3.If the char is an operand just pop the top two elements from stack
  1st popped out element store in v2 and then 2nd one in v1
3. then by using switch make the required operation on v1 and v2
4. return the top element finally from the stack
*/

#include<bits/stdc++.h>
using namespace std;

int  postfix(string s)
{
    stack<int> st;
    for(int i=0;i<s.length();i++)
    {
        if(isdigit(s[i]))
        {
            st.push(s[i]-'0');
            //'3' - '0' means 
            //51 - 48 diff of asci values so we will get 3 
        }
        
        else
        {
            int v2=st.top();
            st.pop();
            int v1=st.top();
            st.pop();

            int d;
            switch (s[i])
            {
            case '+':
                    d=v1+v2;
                    cout<<d<<endl;
                    st.push(d); 
                    break;
            case '-':
                    d=v1-v2;
                    cout<<d<<endl;
                    st.push(d);
                    break;
            case '*': 
                    d=v1*v2;
                    cout<<d<<endl;
                    st.push(d);
                    break;
            case '/':
                    d=v1/v2;
                    cout<<d<<endl;
                    st.push(v1/v2);
                    break;
            case '^':
                    st.push(pow(v1,v2)); break;
            }
        }
    }
    return st.top();
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    string s="52+";
    int ans=postfix(s);
    cout<<ans;
}
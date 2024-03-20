#include<bits/stdc++.h>
using namespace std;

int prefix(string s)
{
    stack<int> st;
    for(int i=s.length()-1;i>=0;i--)
    {
        if(isdigit(s[i]))
        st.push(s[i]-'0');
        else
        {
            int v1=st.top();
            st.pop();
            int v2=st.top();
            st.pop();

            switch (s[i])
            {
            case '+': st.push(v1+v2);  break;
            case '-': st.push(v1-v2); break;
            case '*': st.push(v1*(v2)); break;
            case '/': st.push(v1/v2); break;
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

    string s="-+7*45+29";
    int ans=prefix(s);
    cout<<ans;
}
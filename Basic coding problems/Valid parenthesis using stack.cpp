#include<iostream>
#include<stack>
#define p(x) cout<<x<<endl;
#define m(x) cout<<x<<" ";
using ll = long long;
using namespace std;

int main()
{
    ll n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        stack<char> st;
        bool flag = true;
        for(char c: s)
        {
            if(c=='(')
            {
                st.push(c);
            }
            else if(c=='[')
            {
                st.push(c);
            }
            else if(c=='{')
            {
                st.push(c);
            }
            else if(c==')')
            {
                if (st.empty() || st.top()!='(')
                {
                    flag = false;
                    break;
                }
                else if(st.top()=='(')
                {
                    st.pop();
                }
            }
            else if(c=='}')
            {
                if (st.empty() || st.top()!='{')
                {
                    flag = false;
                    break;
                }
                else if(st.top()=='{')
                {
                    st.pop();
                }
            }
            else if(c==']')
            {
                if(st.empty() || st.top()!='[')
                {
                    flag = false;
                    break;
                }
                else if(st.top()=='[')
                {
                    st.pop();
                }
            }

        }
        if(flag && st.empty())
        {
            p("Yes")
        }
        else
        {
            if(!st.empty())
            {
                p("No")
            }
            else
            {
                p("No")
            }
        }
    }
    return 0;
}

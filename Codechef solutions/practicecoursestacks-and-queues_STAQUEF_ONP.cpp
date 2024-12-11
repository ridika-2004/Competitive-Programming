#include<iostream>
#include<string>
#include<iomanip>
#include<vector>
#include<stack>
#include<queue>
#include<math.h>
#include<set>
#include<iomanip>
#include<algorithm>
#include<numeric>

#define p(x) cout<<x<<endl;
#define m(x) cout<<x;
#define ll long long
using namespace std;


int main ()
{
    ll t;
    cin>>t;
    while(t--)
    {

    string s;
    cin>>s;
    stack<char> st1;
    stack<char> st2;
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]=='(' || s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='^')
        {
            st1.push(s[i]);
        }
        if(s[i]==')')
        {
            st2.push(st1.top());
            st1.pop();
            st1.pop();
        }
        if(s[i]>='a' && s[i]<='z')
        {
            st2.push(s[i]);
        }
    }
    vector<char> v;
    while(!st2.empty())
    {
        v.push_back(st2.top());
        st2.pop();
    }
    for(ll i=v.size()-1;i>=0;i--)
    {
        m(v[i])
    }
    p(" ")
    }
    return 0;
}


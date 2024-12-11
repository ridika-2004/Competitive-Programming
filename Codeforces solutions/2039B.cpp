#include<iostream>
#include<string>

#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

void solve(string s)
{
    if(s.size()<2)
    {
        p(-1)
    }
    else
    {
        for(ll i=0;i<s.size()-2;i++)
        {
            if(s[i]!=s[i+1] && s[i]!=s[i+2] && s[i+1]!=s[i+2])
            {
                p(s[i]<<s[i+1]<<s[i+2])
                return;
            }
        }
        for(ll i=0;i<s.size()-1;i++)
        {
            if(s[i]==s[i+1])
            {
                p(s[i]<<s[i+1])
                return;
            }
        }
        p(-1)
    }
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        solve(s);
    }
    return 0;
}

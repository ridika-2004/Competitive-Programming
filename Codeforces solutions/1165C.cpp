#include<iostream>
#include<vector>
#define ll long long
#define p(x) cout<<x<<endl;
#define m(x) cout<<x;
using namespace std;
int main()
{
    ll n;
    cin>>n;
    vector<char>s;
    bool ok =true;
    for(ll i=0;i<n;i++)
    {
        char c;
        cin>>c;
        if(s.empty())
        {
            s.push_back(c);
        }
        else if(s.size()&1)
        {
            if(s.back()==c)
            {
                ok = false;
            }
            else
            {
                s.push_back(c);
                ok = true;
            }
        }
        else if(!(s.size()&1))
        {
            if(ok)
            {
                s.push_back(c);
            }
            else
            {
                if(s.back()==c)
                {
                    ok = false;
                }
                else
                {
                    s.push_back(c);
                    ok = true;
                }
            }
        }
    }
    ll x = s.size();
    if(x&1)
    {
        x--;
    }
    p(n-x)
    for(ll i=0;i<x;i++)
    {
        m(s[i])
    }
    return 0;
}
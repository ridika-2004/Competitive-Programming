#include<iostream>
#include<vector>
#define ll long long
#define p(x) cout<<x<<endl;
#define m(x) cout<<x<<" ";
using namespace std;

void solve(ll &n, ll &k)
{
    if(n&1)
    {
        m(3)
        m(1)
        m(2)
        {
            for(ll i=5;i<=n;i+=2)
            {
                m(i)
                m(i-1)
            }
            p("")
        }
        return;
    }
    else
    {
        for(ll i=2;i<=n;i+=2)
        {
            m(i)
            m(i-1)
        }
        p("")
    }
}
int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,k;
        cin>>n>>k;
        if(k==1)
        {
            p(-1)
        }
        else if(k==2 && n&1)
        {
            p(-1)
        }
        else
        {
            solve(n,k);
        }
    }
    
    return 0;
}
#include<iostream>
#include<set>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        set<ll> s;
        for(ll i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            s.insert(a);
        }
        ll x = n-s.size();
        if(x&1)
        {
            p(s.size()-1)
        }
        else
        {
            p(s.size())
        }
    }
    return 0;
}
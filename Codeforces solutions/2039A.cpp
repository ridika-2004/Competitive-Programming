#include<iostream>
#include<vector>
#define ll long long
#define p(x) cout<<x<<endl;
#define m(x) cout<<x<<" ";
using namespace std;

void solve(ll n)
{
    vector<ll> v;
    ll x=2;
    for(ll i=1;v.size()<n;)
    {
        if(x%i==i-1)
        {
            v.push_back(x);
            i++;
        }
        else
        {
            x++;
        }
    }
    for(ll i:v)
    {
        m(i)
    }
    p("")
}
int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;
        solve(n);
    }
    return 0;
}

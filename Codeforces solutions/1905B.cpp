#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#define ll long long
#define p(x) cout<<x<<endl;
#define m(x) cout<<x<<" ";
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> v(n);
        for(ll i=0;i<n-1;i++)
        {
            ll a,b;
            cin>>a>>b;
            v[a-1]++;
            v[b-1]++;
        }
        ll leaf = count(v.begin(),v.end(), 1);
        p(ceil(leaf/2.0))
    }
    return 0;
}

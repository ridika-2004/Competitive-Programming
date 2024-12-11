#include<iostream>
#include<vector>
#include<cmath>
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
        ll n,k;
        cin>>n>>k;
        vector<ll> v(n);
        ll maxx=0,sum=0;
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
            sum+=v[i];
            maxx = max(maxx,v[i]);
        }
        double s = sum;
        ll r = ceil(s/k);
        p(max(maxx,r))
    }
    return 0;
}

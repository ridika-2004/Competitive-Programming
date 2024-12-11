#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#define ll long long
#define m(x) cout<<x<<" ";
#define p(x) cout<<x<<endl;
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<pair<ll,ll>> v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i].first;
        }
        for(ll i=0;i<n;i++){
            cin>>v[i].second;
        }
        ll maxx=0,sum=0, ans= INT_MIN;
        for(ll i=0;i<n;i++){
            sum+=max(v[i].first, v[i].second);
        }
        for(ll i=0;i<n;i++){
            ll x = sum- max(v[i].first,v[i].second);
            x += v[i].first+v[i].second;
            ans = max(ans, x);
        }
        p(ans)
    }
    return 0;
}
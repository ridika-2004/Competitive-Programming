#include <bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
#define m(x) cout<<x;
using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        vector<pair<ll,ll>> v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i].first >>v[i].second;
        }
        ll x=v[0].first,y=v[0].second, res=0;
        for(ll i=1;i<n;i++){
            ll a = x+m, b=y+m;
            x+=v[i].first;
            y+=v[i].second;
            ll c = a-x;
            ll d = b-y;
            res += ((c+d)*2);
        }
        ll fin = n*m*4;

        p(fin-res)
    }

    return 0;
}

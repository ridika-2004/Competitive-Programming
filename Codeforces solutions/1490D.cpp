#include<bits/stdc++.h>
#define ll long long
#define p(x) cout << x <<" ";
#define mod 998244353
using namespace std;


void solve(vector<ll> v, vector<ll> &res, ll l, ll d, ll x){
    if(l>d){
        return;
    }
    ll maxvalue = v[l], maxi = l;
    for(ll i=l+1;i<=d;i++){
        if(maxvalue<v[i]){
            maxvalue = v[i];
            maxi = i;
        }
    }

    res[maxi] = x;

    solve(v,res,l,maxi-1, x+1);
    solve(v,res,maxi+1,d,x+1);
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }

        vector<ll> res(v.size());

        ll x = 0;

        solve(v, res, 0, v.size()-1, x);
        for(ll i : res){
            p(i)
        }

        cout<<"\n";
    }

    return 0;
}

#include<bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<" ";
using namespace std;

ll solve(vector<ll> v, ll x, ll l, ll r){
    while(l<r){
        ll m = (l+r)/2;
        if(v[m]<x){
            return solve(v,x,m+1,r);
        } else {
            return solve(v,x,l,m);
        }
    }

    return v.size()-l;
}

void print(vector<ll> v){
    for(ll i : v){
        p(i)
    }
    p("\n")
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;

    vector<ll> v(n);

    for(ll &i: v){
        cin>>i;
    }

    ll x;
    cin>>x;

    ll res = solve(v,x,0,n-1);
    p(res)

    return 0;
}
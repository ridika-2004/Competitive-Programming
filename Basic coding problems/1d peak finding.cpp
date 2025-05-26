#include<bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<" ";
using namespace std;

ll solve(vector<ll> v, ll l, ll r){
    if(r-l<=1){
        if(v[l]>v[r]){
            return l;
        } else {
            return r;
        }
    }
    ll m = (l+r)/2;
    if(v[m]>=v[m-1] && v[m]>=v[m+1]){
        return m;
    } else {
        if(v[m-1]>v[m]){
            return solve(v,l, m-1);
        } else{
            return solve(v,m+1,r);
        }
    }
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

    ll res = solve(v,0,n-1);
    p(res+1)

    return 0;
}
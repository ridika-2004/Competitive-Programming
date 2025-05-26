#include<bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

ll solve(vector<ll> v, ll x, ll i){
    if(i==0){
        return v[i];
    } else {
        return v[i] + x*(solve(v,x,i-1));
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,x;
    cin>>n;

    vector<ll> v(n+1);

    for(ll &i: v){
        cin>>i;
    }

    cin>>x;

    ll res = solve(v,x, n);
    p(res)
    return 0;
}
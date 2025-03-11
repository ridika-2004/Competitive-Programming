#include<bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<" ";
using namespace std;

vector<ll> tree(200005);

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;

    for(ll i=2;i<=n;i++){
        ll x;
        cin>>x;

        tree[i] = x;
    }

    set<ll> result;
    result.insert(n);

    while(n!=1){
        ll val = tree[n];
        result.insert(val);
        n = val;
    }

    for(ll i: result){
        p(i)
    }
    cout<<endl;
    return 0;
}
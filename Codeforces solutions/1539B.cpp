#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define p(x) cout<<x<<"\n";

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        char a;
        cin>>a;
        if(i==0){
            v[i] = ((ll) (a-'a'))+1;
        } else {
            v[i] = ((ll) (a-'a'))+1;
            v[i]+=v[i-1];
        }
        // p(v[i])
    }

    while(k--){
        ll a,b;
        cin>>a>>b;
        if(a!=1){
            p(v[b-1]-v[a-2])
        } else {
            p(v[b-1])
        }
    }

    return 0;
}

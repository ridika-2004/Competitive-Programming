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
    vector<ll> r(k,0);
    for(ll i=0;i<n;i++) {
        cin>>v[i];
        ll rem = v[i]%k;
        r[rem]++;
    }

    ll res=0;
    for(ll i=0;i<k;i++){
        if(i==0){
            if(r[i]!=0){
                res++;
            }
        } 
        else if((2*i)==k){
            res++;
        } 
        else {
            ll a = r[i];
            ll b = r[k-i];
            if(a>b){
                res+=a;
                r[i] = 0;
                r[k-i] = 0;
            } else {
                res+=b;
                r[i] = 0;
                r[k-i] = 0;
            }
        }
    }

    p(res)
    
    return 0;
}

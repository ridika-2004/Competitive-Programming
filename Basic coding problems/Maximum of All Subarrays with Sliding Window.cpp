#include <bits/stdc++.h>
#define p(x) cout << x << endl;
using namespace std;
#define ll long long


int main() {
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];

    for(ll i=0;i<=n-k;i++){
        ll max = v[i];
        for(ll j=1;j<k;j++){
            if(v[i+j]>max){
                max = v[i+j];
            }
        }
        p(max)
    }
    return 0;
}
#include <bits/stdc++.h>
#define p(x) cout << x << endl;
using namespace std;
#define ll long long


int main() {
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];

    ll sum = 0;
    for(ll i=0;i<n-k+1;i++){
        ll temp=0;
        for(ll j=0;j<k;j++){
            temp+=v[i+j];
        }

        sum = max(sum,temp);
    }
    p(sum)
    return 0;
}
#include <bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

int main() {
    ll n;
    cin>>n;
    vector<ll> v(n+1),a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
        v[a[i]]= i+1;
    }
    for(ll i=1;i<=n;i++){
        cout<<v[i]<<" ";
    }
    p("")
    return 0;
}
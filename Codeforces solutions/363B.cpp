#include <bits/stdc++.h>
#define p(x) cout << x << endl;
using namespace std;
#define ll long long


int main() {
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n+1);
    for(ll i=1;i<=n;i++) cin>>a[i];
    ll sum = 0;
    for(ll i=1;i<=k;i++) sum+=a[i];
    ll x =1;
    ll res=1;
    ll minsum=sum;
    for(ll i=2;x+k<=n;i++){
        sum = sum-a[x]+a[x+k];
        // p(sum)
        // p(res)
        if(minsum>sum){
            minsum = sum;
            res = i;
        }
        x++;
    }
    p(res)
    return 0;
}
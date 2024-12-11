#include <bits/stdc++.h>
#define ll long long
#define p(x) cout << x << endl;
#define m(x) cout << x << " ";
using namespace std;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n,k;
        cin >> n>>k;
        vector<ll> a1(n),a(n+1,0);
        for(ll i=0;i<n;i++){
            cin>>a1[i];
            a[i+1] = a[i]+a1[i];
        }
        for(ll i=1;i<n;i++){
            a1[i] = max(a1[i-1],a1[i]);
        }
        for(ll i=0;i<k;i++){
            ll b;
            cin>>b;
            auto x = upper_bound(a1.begin(),a1.end(),b);
            ll y = x- a1.begin();
            m(a[y])
        }
        p("")
    }
    return 0;
}
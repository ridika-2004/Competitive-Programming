#include <bits/stdc++.h>
#define ll long long
#define p(x) cout << x << endl;
using namespace std;

int main() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) cin >> v[i];
    
    if (n == 1) {
        p(v[0]);
        return 0;
    }
    
    vector<ll> dp(n);
    dp[0] = v[0];
    dp[1] = v[1];
    for (ll i = 2; i < n; i++) {
        dp[i] = v[i] + min(dp[i-1], dp[i-2]);
    }
    
    p(min(dp[n-1], dp[n-2]));
    
    return 0;
}

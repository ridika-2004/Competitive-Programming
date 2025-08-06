#include <bits/stdc++.h>
#define ll long long
#define p(x) cout << x <<" ";
#define br cout<<endl;
using namespace std;


int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n,m;
    cin>>n>>m;

    vector<ll> weight(n+1,0);
    vector<ll> value(n+1,0);

    for(ll i=1;i<=n;i++){
        cin>>weight[i];
    }

    for(ll i=1;i<=n;i++){
        cin>>value[i];
    }

    vector<vector<ll>> dp(n+1, vector<ll> (m+1,0));

    for(ll i=1;i<=n;i++){
        for(ll j=1;j<weight[i];j++){
            dp[i][j] = dp[i-1][j];
        }
        for(ll j=weight[i];j<=m;j++){
            dp[i][j] = max(dp[i-1][j], dp[i-1][j-weight[i]]+value[i]);
        }
    }

    for(ll i=0;i<=n;i++){
        for(ll j=0;j<=m;j++){
            p(dp[i][j])
        }
        br
    }

    return 0;
}

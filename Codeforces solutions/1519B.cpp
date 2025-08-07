#include<bits/stdc++.h>
#define ll long long
#define p(x) cout << x <<endl;
#define br cout<<endl;
#define mod 998244353
using namespace std;


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n,m,k;
        cin>>n>>m>>k;
        vector<vector<ll>> dp(n+5, vector<ll>(m+5, -1));

        dp[1][1] = 0;

        for(ll i=2;i<=n;i++){
            dp[i][1] = dp[i-1][1]+1;
        }

        for(ll j=2;j<=m;j++){
            dp[1][j] = dp[1][j-1]+1;
        }

        for(ll i=2;i<=n;i++){
            for(ll j=2;j<=m;j++){
                dp[i][j] = min(dp[i-1][j]+j, dp[i][j-1]+i);
            }
        }

        if (dp[n][m]==k) p("YES") 
        else p("NO")
    }

    return 0;
}

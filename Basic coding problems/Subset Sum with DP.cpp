#include<bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,k;
    cin>>n>>k;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin>>a[i];
    vector<bool> dp(k+1, false);
    dp[0] = 1;

    for(ll i=0;i<n;i++){
        for(ll j=k;j>=a[i];j--){
            dp[j] = dp[j] || dp[j-a[i]];
        }
    }

    p(dp[k])
    
    return 0;
}

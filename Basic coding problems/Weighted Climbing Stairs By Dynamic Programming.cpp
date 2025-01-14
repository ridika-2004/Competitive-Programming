#include <bits/stdc++.h>
#define ll long long
#define p(x) cout << x << endl;
#define m(x) cout << x << " ";
using namespace std;

// ll mincostrecur(ll i, vector<ll> &v){
//     if(i==0 || i==1){
//         return v[i];
//     }

//     return v[i]+min(mincostrecur(i-1,v),mincostrecur(i-2,v));
// }
// ll mincost(vector<ll> &v){
//     ll n = v.size();
//     if(n==1){
//         return v[0];
//     }

//     return min(mincostrecur(n-1,v),mincostrecur(n-2,v));
// }

// ll mincostrecur(ll i, vector<ll> &v, vector<ll> &dp){
//     if(i==0 || i==1){
//         return v[i];
//     }

//     if(dp[i]!=-1){
//         return dp[i];
//     }

//     dp[i]= v[i]+min(mincostrecur(i-1,v,dp),mincostrecur(i-2,v,dp));
//     return dp[i];
// }
// ll mincost(vector<ll> &v){
//     ll n = v.size();
//     if(n==1){
//         return v[0];
//     }

//     vector<ll> dp(n,-1);

//     return min(mincostrecur(n-1,v,dp),mincostrecur(n-2,v,dp));
// }

// ll mincost(vector<ll> &v){
//     ll n = v.size();
//     if(n==1){
//         return v[0];
//     }

//     vector<ll> dp(n);
//     dp[0] = v[0];
//     dp[1] = v[1];

//     for(ll i=2;i<n;i++){
//         dp[i] = v[i]+ min(dp[i-1],dp[i-2]);
//     }

//     return min(dp[n-1],dp[n-2]);
// }

ll mincost(vector<ll> &v){
    ll n = v.size();
    if(n==1){
        return v[0];
    }

    ll f1,f2,res;
    f1 = v[0];
    f2 = v[1];

    for(ll i=2;i<n;i++){
        res = v[i]+min(f1,f2);
        f1 = f2;
        f2 = res;
    }

    return res;
}


int main(){

    vector<ll> v = {1,15,2};

    ll res = mincost(v);
    p(res)
    return 0;
}
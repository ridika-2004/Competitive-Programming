#include<bits/stdc++.h>
#define ll long long
#define p(x) cout << x <<endl;
#define m(x) cout << x <<" ";
#define mod 998244353
using namespace std;

void solve(vector<ll> v, ll n, set<vector<ll>> &res){
    for(ll i=1;i<=n;i++){
        for(ll j=0;j<=n-i;j++){
            vector<ll> temp;
            for(ll k=j;k<j+i;k++){
                temp.push_back(v[k]);
            }
            res.insert(temp);
        }
    }
}


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n; cin>>n;
    vector<ll> v(n);
    for (ll &i : v) cin>>i;

    sort(v.begin(), v.end());

    set<vector<ll>> res;

    solve(v,n,res);

    for(auto i : res){
        for(auto j : i){
            m(j)
        }
        p("")
    }

    return 0;
}


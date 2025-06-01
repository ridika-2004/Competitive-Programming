#include<bits/stdc++.h>
#define ll long long
#define p(x) cout << x <<endl;
#define mod 998244353
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    vector<pair<ll,ll>> a1,a2,a3;
    for(ll i=0; i<n; i++) {
        ll x;
        cin>>x;
        if(x==1){
            a1.push_back({x,i+1});
        } else if(x==2){
            a2.push_back({x,i+1});
        } else {
            a3.push_back({x,i+1});
        }
    }

    ll m = min({a1.size(),a2.size(),a3.size()});
    if(m ==0){
        p(0)
    } else {
        p(m)
        for(ll i=0;i<m;i++){
            p(a1[i].second<<" "<<a2[i].second<<" "<<a3[i].second)
        }
    }
    return 0;
}

#include<bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> v1(n),v2(n);
        for(ll &i: v1){
            cin>>i;
        }
        for(ll &i: v2){
            cin>>i;
        }

        auto it = find(v1.begin(),v1.end(), v2[0]);
        ll dis = distance(v1.begin(), it);
        vector<pair<ll,ll>> vp(n);
        for(ll i = 0; i < n; ++i){
            vp[i] = make_pair(abs(v1[i]-v2[0]), v1[i]);
        }
        sort(vp.begin(), vp.end());
        vector<ll> check;
        for(auto i: vp){
            check.push_back(i.second);
        }

        // for(ll i: check){
        //     p(i)
        // }

        if(v2==check){
            p(dis+1)
        } else {
            p(-1)
        }
    }
    return 0;
}



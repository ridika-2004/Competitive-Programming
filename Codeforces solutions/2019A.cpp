#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define p(x) cout<<x<<"\n";

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;
        vector<ll> v(n);
        vector<ll> v1,v2;
        for(ll i=0;i<n;i++){
            cin>>v[i];
            if(i&1){
                v1.push_back(v[i]);
            } else{
                v2.push_back(v[i]);
            }
        }

        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());

        ll r1=0,r2=0;

        if(!v1.empty()){
            r1 = v1[v1.size()-1]+v1.size();
        }

        if(!v2.empty()){
            r2 = v2[v2.size()-1]+v2.size();
        }

        p(max(r1,r2))
        
    }
    
    return 0;
}

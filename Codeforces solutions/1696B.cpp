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
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        ll az=0,nzi=0;
        for(ll i=0;i<n;i++) {
            if(v[i]!=0){
                az=1;
                nzi=i;
                break;
            }
        }
        
        if(az==0){
            p(0);
        } else {
            ll fz = 0,fzi=0;
            for(ll i=nzi+1;i<n;i++){
                if(v[i]==0){
                    fz = 1;
                    fzi = i;
                    break;
                }
            }

            ll afz=0;
            for(ll i=fzi+1;i<n;i++){
                if(v[i]!=0){
                    afz=1;
                    break;
                }
            }

            // p("nzi: "<<nzi)
            // p("fz: "<<fz)
            // p("fzi: "<<fzi)
            // p("afz: "<<afz)

            if(fz==1 && afz==1){
                p(2)
            } else {
                p(1)
            }
        }
    }
    
    return 0;
}

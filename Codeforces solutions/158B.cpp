#include <bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

int main() {
    ll t;
    cin>>t;
    
        vector<ll> v(5);
        while(t--){
            ll a;
            cin>>a;
            v[a]++;
        }
        ll ans = v[4];
        ll min3 = min(v[3],v[1]);
        ans+=min3;
        v[3]-=min3;
        v[1]-=min3;
        if(v[3]>0){
            ans+=v[3];
        }
        ans+=(v[2]/2);
        v[2] = v[2]%2;
        if(v[2]!=0){
            if(v[1]<=2){
                ans+=1;
            } else {
                ans+=1;
                v[1]-=2;
                if(v[1]%4==0){
                    ans+=(v[1]/4);
                } else {
                    ans+=(v[1]/4)+1;
                }
            }
        } else {
            if(v[1]%4==0){
                    ans+=(v[1]/4);
                } else {
                    ans+=(v[1]/4)+1;
                }
        }
    p(ans)
    return 0;
}
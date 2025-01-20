#include <bits/stdc++.h>
#define p(x) cout<<x<<endl;
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> even,odd;
        for(ll i=0;i<n;i++){
            ll a;
            cin>>a;
            if(a&1){
                odd.push_back(a);
            } else {
                even.push_back(a);
            }
        }

        vector<ll> v;
        for(ll i=0;i<even.size();i++){
            v.push_back(even[i]);
        }
        for(ll i=0;i<odd.size();i++){
            v.push_back(odd[i]);
        }
        ll s=0,c=0;
        for(ll i=0;i<v.size();i++){
            s+=v[i];
            if(s%2==0){
                c++;
                while(s%2==0){
                    s/=2;
                }
            }
        }
        p(c)
    }
    return 0;
}
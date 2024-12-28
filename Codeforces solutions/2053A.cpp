#include <bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++)cin>>v[i];
        ll x=0;
        for(ll i=0;i<n-1;i++){
            ll a = abs(v[i]-v[i+1]);
            if(a>=v[i] || a>=v[i+1]){
                x++;
            }
        }
        if(x>=(n-1)){
            p("NO")
        }
        else{
            p("YES")
        }
    }  
    return 0;
}
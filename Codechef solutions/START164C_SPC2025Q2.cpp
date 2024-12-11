#include <bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--){
        ll n,ve,va;
        cin>>n>>ve>>va;
        vector<ll> v(n);
        for(ll i=0;i<n;i++)cin>>v[i];
        sort(v.begin(),v.end());
        for(ll i=0;i<n-1;i++){
            va+=v[i];
        }
        ve+=v[n-1];
        if(ve>va){
            p("Ved")
        }
        else if(va>ve){
            p("Varun")
        }
        else{
            p("Equal")
        }
        
    }  
    return 0;
}
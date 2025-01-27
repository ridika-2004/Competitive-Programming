#include<bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

int main(){
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(ll &i : a) cin>>i;
        
        bool ok =1;
        for(ll i=0; i<n; i++){
            if(a[i] <= max((2*n-2*i-2), (2*i))){
                ok = 0;
                break;
            }
        }
        if(ok) p("Yes")
        else p("No")
    }
    
    return 0;
}
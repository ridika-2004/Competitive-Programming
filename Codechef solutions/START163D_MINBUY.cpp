#include <bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--){
        ll n,k,sum=0,c=0;
        cin>>n>>k;
        vector<ll> a(n);
        for(ll i=0;i<n;i++)cin>>a[i];
        vector<ll> b(n);
        for(ll i=0;i<n;i++){
            cin>>b[i];
            b[i] = b[i]*a[i];
        }
        sort(b.rbegin(), b.rend());
        bool ok= 0;
        for(ll i:b){
            sum+=i;
            c++;
            if(sum>=k){
                ok = 1;
                break;
            }
        }
        if(ok){
            p(c)
        }
        else{
            p(-1)
        }
    }
}

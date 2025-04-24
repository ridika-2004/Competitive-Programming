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
        ll n,k;
        cin>>n>>k;

        vector<ll> l(n),r(n);

        for(ll i=0;i<n;i++){
            cin>>l[i];
        }

        for(ll i=0;i<n;i++){
            cin>>r[i];
        }

        ll res=0;
        vector<ll> b(n);
        for(ll i=0;i<n;i++){
            res+=max(l[i],r[i]);
            b[i] = min(l[i],r[i]);
        }

        sort(b.rbegin(),b.rend());

        for(ll i=0;i<k-1;i++){
            res+=b[i];
        }

        p(res+1)
    }

    return 0;
}
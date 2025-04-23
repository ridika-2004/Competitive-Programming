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

        vector<ll> v(n);
        ll maxx=INT_MIN,minn=INT_MAX;
        for(ll &i: v){
            cin>>i;
            maxx = max(maxx,i);
            minn = min(minn,i);
        }

        ll res = maxx-minn-1;
        if(res>0){
            p(res)
        } else {
            p(0)
        }
    }
    return 0;
}
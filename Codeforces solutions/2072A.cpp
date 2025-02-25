#include<bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);

    ll t;
    cin>>t;
    while(t--){
        ll n,k,p;
        cin>>n>>k>>p;
        if(k==0){
            p(0)
        } else {
            ll res = ceil(abs((double)k)/(double)p);
            if(res>n){
                p(-1)
            } else {
                p(res)
            }
        }
    }

    return 0;
}
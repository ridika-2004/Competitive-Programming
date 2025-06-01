#include<bits/stdc++.h>
#define ll long long
#define p(x) cout << x <<endl;
#define mod 998244353
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n);
        ll o=0,e=0;
        for(ll i = 0; i < n; i++){
            cin>>a[i];
            if(i&1 && !(a[i]&1)){
                o++;
            } else if(!(i&1) && a[i]&1){
                e++;
            }
        }

        if(o==e){
            p(o)
        } else {
            p(-1)
        }
    }
    return 0;
}

#include<bits/stdc++.h>
#define ll long long
#define p(x) cout << x <<endl;
#define mod 998244353
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // ll t;
    // cin>>t;

    // while(t--){
        ll n;
        cin>>n;
        vector<ll> v(n);
        ll a = 0, c = 0, res = 1;
        for(ll i=0;i<n;i++){
            cin>>v[i];
            if(v[i]>a){
                c++;
            } else {
                res = max(res,c);
                c = 1;
            }
            a = v[i];
        }

        p(max(res,c))
    // }

    return 0;
}

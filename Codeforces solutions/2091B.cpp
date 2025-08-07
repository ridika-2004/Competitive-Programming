#include<bits/stdc++.h>
#define ll long long
#define p(x) cout << x <<endl;
#define br cout<<endl;
#define mod 998244353
using namespace std;


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;

        vector<ll> v(n);
        for(ll &i : v){
            cin>>i;
        }

        sort(v.rbegin(), v.rend());

        ll res = 0, cnt=1;

        for(ll i=0;i<n;i++){
            if(v[i]*cnt >=k){
                res++;
                cnt = 1;
            } else {
                cnt++;
            }
        }

        p(res)

    }

    return 0;
}

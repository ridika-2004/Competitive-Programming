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
        ll n;
        cin>>n;

        vector<ll> v(n);
        for(ll &i : v){
            cin>>i;
        }

        if(v[0]<v[1]){
            p(2*v[0])
        } else {
            p(v[0]+v[1])
        }

    }

    return 0;
}

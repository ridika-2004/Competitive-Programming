#include<bits/stdc++.h>
#define ll long long
#define p(x) cout << x << " ";
#define mod 998244353
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,k;
    cin>>n>>k;
    vector<ll> a;
    for(ll i=0; i<n; i++) {
        ll x;
        cin>>x;
        if(x+k > 5){
            continue;
        } else{
            a.push_back(x);
        }
    }

    ll ans = a.size()/3;
    p(ans)
    return 0;
}

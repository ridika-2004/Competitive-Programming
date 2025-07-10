#include<bits/stdc++.h>
#define ll long long
#include<thread>
#define p(x) cout<<x<<endl;
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<ll> price(n + 1);
    price[0] = 0;
    for (ll i = 1; i <= n; i++) {
        cin >> price[i];
    }

    for(ll i=2;i<=n;i++){
        ll maxval = price[i];        
        for(ll j=1,k=i-1;j<=k;j++,k--){
            maxval = max(maxval, price[j] + price[k]);
        }

        price[i] = maxval;
    }

    p(price[n]);
    return 0;
}
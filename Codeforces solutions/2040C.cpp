#include <bits/stdc++.h>
#define ll long long
#define p(x) cout << x << endl;
#define m(x) cout << x << " ";
using namespace std;

void ans(ll i, ll l, ll r, ll k, vector<ll> &v){
    if(l==r){
        v[l] =i;
        return;
    }
    ll s = r-l-1;
    if(s <60 && (1LL << s)<k){
        v[r] = i;
        ans(i+1,l,r-1,k-(1LL << s), v);
    } else {
        v[l] =i;
        ans(i+1,l+1,r,k, v);
    }
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n,k;
        cin>>n>>k;
        if(n-1 <60 && (1LL <<(n-1))<k){
            p(-1)
        }
        else{
            vector<ll> v(n);
            ans(1,0,n-1,k,v);
            for(ll i:v){
                m(i)
            }
            p("")
        }
    }
    return 0;
}
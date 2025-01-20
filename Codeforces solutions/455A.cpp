#include <bits/stdc++.h>
#define p(x) cout<<x<<endl;
using namespace std;
#define ll long long

int main(){
    ll n;
    cin>>n;
    ll maxi = INT_MIN;
    vector<ll> v(100005,0);
    while(n--){   
        ll a;
        cin>>a;
        v[a]++;
        maxi = max(maxi,a); 
    }

    vector<ll> b(100005,0);
    b[0] =0;
    b[1] =v[1];
    for(ll i=2;i<=100000;i++){
        b[i] = max(b[i-1],b[i-2]+v[i]*i);
    }

    p(b[maxi])

    return 0;
}
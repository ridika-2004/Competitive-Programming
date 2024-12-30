#include <bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

int main() {
    ll n;
    cin>>n;
    vector<ll> a(n);
    set<ll> s;
    for(ll i=0;i<n;i++){
        a[i]=i+1;
    }
    ll x;
    cin>>x;
    while(x--){
        ll x1;
        cin>>x1;
        s.insert(x1);
    }

    ll y;
    cin>>y;
    while(y--){
        ll y1;
        cin>>y1;
        s.insert(y1);
    }
    vector<ll> v;
    for(ll s1: s){
        v.push_back(s1);
        //p(s1)
    }
    // for(ll i:a){
    //     p(i)
    // }
    // for(ll i: v){
    //     p(i)
    // }
    if(v==a){
        p("I become the guy.")
    } else {
        p("Oh, my keyboard!")
    }
    return 0;
}
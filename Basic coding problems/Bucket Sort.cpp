#include <bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<" ";
using namespace std;

int main()
{
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    vector<vector<ll>> b(10);
    for(ll i=0;i<n;i++){
        ll a = v[i];
        ll d = log10(a);
        ll f = a/pow(10,d);
        b[f].push_back(v[i]);
    }
    for(ll i=0;i<10;i++){
        vector<ll> u = b[i];
        if(!u.empty()){
            for(ll i=0;i<u.size();i++){
                ll j=i;
                while(j>0 && u[j-1]>u[j]){
                    swap(u[j],u[j-1]);
                    j--;
                }
            }
        }
    }

    v.clear();
    for(ll i=0;i<10;i++){
        vector<ll> w = b[i];
        if(!w.empty()){
            for(ll i: w){
                v.push_back(i);
            }
        }
    }

    for(ll i: v){
        p(i)
    }
    return 0;
}
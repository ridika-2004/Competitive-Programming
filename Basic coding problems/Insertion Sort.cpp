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
    for(ll i=1;i<n;i++){
        ll j=i;
        while(j>0 && v[j-1]>v[j]){
            swap(v[j],v[j-1]);
            j--;
        }
    }
    for(ll i=0;i<n;i++){
        p(v[i])
    }
    
    return 0;
}
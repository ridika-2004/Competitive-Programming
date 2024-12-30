#include <bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

int main() {
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    ll maxx=0,c=0;
    for(ll i=0;i<n-1;i++){
        if(v[i+1]<v[i]){
            c=0;
        }
        else{
            c++;
            maxx = max(maxx,c);
        }
    }
    p(maxx+1)
    return 0;
}
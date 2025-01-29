#include<bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

int main(){
    ll n,t;
    cin>>n>>t;
    vector<ll> v(n);
    for(ll i=1;i<n;i++){
        cin>>v[i];
    }
    ll x=1,sum=0;
    bool ok =0;
    while(x<n){
        sum=x+v[x];
        if(sum==t){
            ok=1;
            break;
        }
        x = sum;
    }
    if(ok){
        p("YES")
    }else{
        p("NO")
    }
    return 0;
}
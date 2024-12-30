#include <bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

int main() {
    ll s,n;
    cin>>s>>n;
    vector<pair<ll,ll>> v(n);
    for(ll i=0;i<n;i++){
        ll a,b;
        cin>>a>>b;
        v[i].first = a;
        v[i].second = b;
    }
    sort(v.begin(),v.end());

    for(auto i: v){
        if(s<=i.first){
            p("NO")
            return 0;
        }
        s+=i.second;
    }
    p("YES")
    return 0;
}
#include <bits/stdc++.h>
#define ll long long
#define p(x) cout << x << endl;
#define m(x) cout << x << " ";
using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n),b(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        for(ll i=0;i<n;i++){
            cin>>b[i];
        }

        ll c=0,d=0,md=INT_MAX;
        for(ll i=0;i<n;i++){
            if(a[i]<b[i]){
                c++;
                d=b[i]-a[i];
            } else{
                md = min(md, a[i]-b[i]);
            }
        }
        if(c>1){
            p("NO")
        } else{
            if(md>=d){
                p("YES")
            } else {
                p("NO")
            }
        }
    }
    return 0;
}
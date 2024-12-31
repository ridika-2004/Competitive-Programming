#include <bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n&1){
            if(n==1){
                p("NO")
                continue;
            }
            ll x = sqrt(n);
            if(x*x!=n){
                p("NO")
            } else {
                bool pr = 0;
                for(ll i=2;i*i<=x;i++){
                    if(x%i==0){
                        pr=1;
                        break;
                    }
                }
                if(pr){
                    p("NO")
                } else {
                    p("YES")
                }
            }
        } else {
            if(n!=4){
                p("NO")
            } else {
                p("YES")
            }
        }
    }
    return 0;
}
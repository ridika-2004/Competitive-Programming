#include <bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        if(n&1){
            ll res = n/2;
            if(res==k || res+1==k){
                p("YES")
            }
            else{
                p("NO")
            }
        }
        else{
            ll res = n/2;
            if(res==k){
                p("YES")
            }
            else{
                p("NO")
            }
        }
    }
}

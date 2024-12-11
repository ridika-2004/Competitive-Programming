#include <bits/stdc++.h>
#define ll long long
#define p(x) cout << x << endl;
#define m(x) cout << x << " ";
using namespace std;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n,k;
        cin >>n>>k;
        vector<ll> v(n);
        for(ll i=0;i<n;i++)cin>>v[i];
        if(n==1){
            p("YES")
            p(1)
        }
        else{
        bool ok=0;
        for(ll i=0;i<n;i++){
            ok=0;
            for(ll j=0;j<n;j++){
                if(i==j){
                    continue;
                }
                else if(abs(v[i]-v[j])%k==0){
                    ok=0;
                    break;
                }
                else if(abs(v[i]-v[j])%k!=0){
                    ok=1;
                }
            }
            if(ok){
                p("YES")
                p(i+1)
                break;
            }
        }
        if(!ok){
            p("NO")
        }
        }
    }
    return 0;
}
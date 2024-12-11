#include <bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll c2 = count(s.begin(), s.end(), '2');
        ll c3 = count(s.begin(), s.end(), '3');
        ll sum=0;
        for(char c:s){
            sum+=(ll)c-'0';
        }
        bool ok =0;
        for(ll i=0;i<=c2;i++){
            for(ll j=0;j<=c3;j++){
                ll x = sum + (2*i)+(6*j);
                if(x%9==0){
                    p("YES")
                    ok=1;
                    break;
                }
            }
            if(ok){
                break;
            }
        }
        if(!ok){p("NO")}
    }
    return 0;
}
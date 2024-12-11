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
        string s,t;
        cin>>s>>t;
        ll x=0;
        for(ll i=0;i<n;i++){
            if(s[i]!=t[i]){
                x++;
            }
        }
        if(x&1){
            p("NO")
        }
        else{
            p("YES")
        }
    }  
    return 0;
}
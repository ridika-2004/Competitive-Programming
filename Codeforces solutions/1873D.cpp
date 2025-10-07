#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define p(x) cout<<x<<"\n";

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;

        ll i=0,res=0;
        while(i<n){
            if(s[i]=='B'){
                i+=k;
                res++;
            } else{
                i++;
            }
        }

        p(res)
    }
    
    return 0;
}

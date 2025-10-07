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
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll l=0,r=n-1;
        while(l<=r){
            if(s[l]==s[r]){
                break;
            } else {
                l++;
                r--;
            }
        }
        p(r-l+1)
    }
    
    return 0;
}

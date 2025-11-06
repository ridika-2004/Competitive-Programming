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
        string s;
        ll n;
        cin>>s>>n;
        ll x = s.length();
        map<char,ll> mp;
        for (char c = 'a'; c <= 'z'; c++) mp[c] = 0;

        for(auto c:s) {
            mp[c]=1;
        }

        string res="";

        for(auto i : mp){
            if(res.length()==x) break;
            if(n==0 && i.second==1){
                continue;
            }
            res+=i.first;
            if(i.second==1) n--;
        }

        if(res.length()==x) p(res)
        else p("NOPE")
    }
    
    return 0;
}

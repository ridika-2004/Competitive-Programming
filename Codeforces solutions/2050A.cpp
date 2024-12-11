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
        ll x=0,ans=0;
        vector<string> v;
        while(n--){
            string s;
            cin>>s;
            v.push_back(s);
        }
        for(ll i=0;i<v.size();i++){
            if(x+v[i].size()<=k){
                x+=v[i].size();
                ans++;
            }
            else{
                break;
            }
        }
        p(ans)
    }
    return 0;
}
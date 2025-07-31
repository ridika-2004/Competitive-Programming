#include <bits/stdc++.h>
#define ll long long
#define p(x) cout << x <<" ";
#define br cout<<endl;
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    string ss;
    cin>>ss;

    string s="";
    bool ok = 0;
    for(ll i=0;i<ss.size();i++){
        if(ss[i]=='Q'){
            ok = 1;
            s+=ss[i];
        }
        if(ok && ss[i]=='A'){
            s+=ss[i];
        }
    }

    vector<ll> prefixsum(s.size());
    ll x = 0;

    for(ll i=0;i<s.size();i++){
        if(s[i]=='Q'){
            x++;
            prefixsum[i] = x;
        } else {
            prefixsum[i] = x;
        }
    }
    // p(s)

    ll maxx = prefixsum[s.size()-1];

    ll res=0;
    for(ll i=0;i<s.size();i++){
        if(s[i]=='A'){
            res += (prefixsum[i] * (maxx-prefixsum[i]));
        }
    }

    p(res)


    // QAQQQZZYNOIWIN

    return 0;
}

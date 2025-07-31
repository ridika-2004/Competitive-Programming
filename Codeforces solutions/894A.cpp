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
    // p(s)

    ll res=0;
    for(ll i=0;i<s.size();i++){
        if(s[i]=='A'){
            ll x = count(s.begin(), s.begin()+i, 'Q');
            ll y = count(s.begin()+i+1, s.end(), 'Q');
            res+=(x*y);
        }
    }

    p(res)


    return 0;
}

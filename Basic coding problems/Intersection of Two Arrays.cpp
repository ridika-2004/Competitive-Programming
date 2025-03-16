#include <bits/stdc++.h>
#define ll long long
#define m(x) cout << x << " ";
#define p(x) cout << x << endl;
using namespace std;

int main() {

    ll n,m;
    cin>>n>>m;
    vector<ll> v1(n),v2(m);
    map<ll,ll> m1,m2;
    for(ll &i:v1){
        cin>>i;
        m1[i]++;
    }
    vector<ll> res;
    for(ll &i:v2){
        cin>>i;
        m2[i]++;
    }

    for(auto i:m1){
        if(m2[i.first]>0){
            ll minNum = min(i.second, m2[i.first]);
            while(minNum--){
                res.push_back(i.first);
            }
        }
    }

    for(ll i: res){
        m(i)
    }
    p("")
    return 0;
}

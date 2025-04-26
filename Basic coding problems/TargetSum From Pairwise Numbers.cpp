#include<bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

map<string,bool> m;

#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool ok(vector<pair<ll,ll>> v, ll x) {
    unordered_set<ll> possible;
    possible.insert(0);

    for (auto &p :v) {
        unordered_set<ll> new_possible;
        for (ll val :possible) {
            new_possible.insert(val+p.first);
            new_possible.insert(val+p.second);
        }
        possible = new_possible;
    }

    return possible.count(x);
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    ll n,x;
    cin>>n>>x;

    vector<pair<ll,ll>> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }

    if(ok(v,x)){
        p("Yes")
    } else {
        p("No")
    }

    return 0;
}

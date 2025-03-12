#include<bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<" ";
using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,q;
    cin>>n>>q;

    list<ll> lst;
    while(n--){
        ll i;
        cin>>i;
        lst.push_back(i);
    }

    while(q--){
        ll i;
        cin>>i;

        auto it = find(lst.begin(), lst.end(), i);
        ll index = distance(lst.begin(), it);
        p(index+1)
        lst.erase(it);
        lst.push_front(i);

    }
    return 0;
}
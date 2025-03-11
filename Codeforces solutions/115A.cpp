#include<bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

vector<ll> tree[2005];
vector<ll> roots;

ll dfs(ll root){
    ll height = 1;
    for(ll child : tree[root]){
        height = max(height, 1+dfs(child));
    }

    return height;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;

    for(ll i=1;i<=n;i++){
        ll a;
        cin>>a;
        if(a==-1){
            roots.push_back(i);
        }
        else {
            tree[a].push_back(i);
        }
    }

    ll res = 0;

    for(ll root : roots){
        res = max(res, dfs(root));
    }

    p(res)
}
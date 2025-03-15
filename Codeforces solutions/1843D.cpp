#include<bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

vector<vector<ll>> tree;
vector<ll> cnt;

void dfs(ll node, ll parent){
    //p("Visiting node: " << node << ", Parent: " << parent)

    if (tree[node].size() == 1 && node != 1) { 
        cnt[node]=1;
        //p("  -> Leaf node detected: " << node)
    } else {
        for(ll child: tree[node]){
            if(child!=parent){
                //p("  -> Node " << node << " -> Going to child: " << child)
                dfs(child,node);
                cnt[node]+=cnt[child];
                //p("  -> Returning to node: " << node << ", Total leaf count now: " << cnt[node])
            }
        }
    }
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        tree.assign(n + 1, vector<ll>());
        cnt.assign(n + 1, 0);
        for(ll i=1;i<n;i++){
            ll a,b;
            cin>>a>>b;
            tree[a].push_back(b);
            tree[b].push_back(a);
        }

        dfs(1, -1);

        ll q;
        cin>>q;
        while (q--)
        {
            ll x,y;
            cin>>x>>y;
            p(cnt[x]*cnt[y])
        }
    }
    return 0;
}
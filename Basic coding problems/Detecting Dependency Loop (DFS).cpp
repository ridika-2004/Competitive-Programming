#include <bits/stdc++.h>
#define ll long long
#define m(x) cout << x << " ";
using namespace std;

bool hascycle(ll root, vector<vector<ll>>& graph, vector<bool>& v, unordered_map<ll,ll>& um) {
    // m(root)
    v[root] = true;
    um[root] ++;
    for(ll child : graph[root]){
        if(v[child]){
            if(um[child]==1) return true;
        } else {
            if(hascycle(child, graph, v, um)) return true;
        }
    }

    um[root] = 0;
    return false;
}

int main() {

    ll n,m;
    cin>>n>>m;
    vector<vector<ll>> graph(n+1);
    for(ll i=0;i<m;i++){
        ll x,y;
        cin>>x>>y;
        graph[x].push_back(y);
    }

    vector<bool> visited(n+1, false);
    unordered_map<ll,ll> um;

    m(hascycle(1, graph, visited, um))
    cout << endl;

    return 0;
}

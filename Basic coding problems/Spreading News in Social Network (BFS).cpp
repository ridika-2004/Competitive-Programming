// In a company of n employees, some employees are friends with others. 
// One day, a manager tells a piece of news to employee x. An employee can spread the news to all their direct friends in one time unit.
// You are to find how many employees will know the news after t time units.
// Input: First line contains integers n, m, x, t. Next m lines contain pairs u v representing a bidirectional
// friendship between employee u and v.

#include <bits/stdc++.h>
#define ll long long
#define m(x) cout << x << " ";
using namespace std;

ll bfs(ll root, vector<vector<ll>> &graph, vector<bool> &v, ll t){
    queue<ll> q;
    q.push(root);
    v[root] = true;

    ll res = 1;

    while(!q.empty() && t!=0){
        ll curr = q.front();
        q.pop();
        for(ll child : graph[curr]){
            if(!v[child]){
                v[child] = true;
                q.push(child);
            }
        }
        res+=q.size();
        t--;
    }

    return res;
}

int main() {

    ll n,m,x,t;
    cin>>n>>m>>x>>t;
    vector<vector<ll>> graph(n+1);
    for(ll i=0;i<m;i++){
        ll x,y;
        cin>>x>>y;
        graph[x] = {y};
        graph[y] = {x};
    }

    vector<bool> visited(n+1, false);

    m(bfs(1, graph, visited, t))
    cout<<endl;
    return 0;
}

#include<bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

vector<int> tree[100005]; // Adjacency list for n <= 100000

// ✅ Depth-First Search (DFS)
void dfs(int node, int parent) {
    for (int child : tree[node]) {
        if (child != parent) { // Avoid backtracking
            dfs(child, node);
        }
    }
}

// ✅ Breadth-First Search (BFS) (Using Queue)
void bfs(int root) {
    queue<int> q;
    q.push(root);
    
    while (!q.empty()) {
        int node = q.front(); q.pop();
        for (int child : tree[node]) {
            q.push(child);
        }
    }
}

int main(){

    // set / map / multiset → For ordered operations
    // priority_queue → For heaps
    // unordered_map → For quick lookups
    // unordered_set → For quick lookups
    ios_base::sync_with_stdio(false);
    int n; cin >> n;
    int n; cin >> n;
    vector<int> tree[n+1]; // Assuming 1-based indexing

    // 👉 Example: Building a tree from input
    for (int i = 0; i < n-1; i++) { 
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u); // Because it's an undirected tree
    }
    



    return 0;
}
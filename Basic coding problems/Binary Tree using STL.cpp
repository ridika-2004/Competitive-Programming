#include<bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<" ";
#define px cout<<endl;
using namespace std;

vector<pair<int,int>> binary_tree;

void dfs(ll root){
    if(root==-1){
        return;
    }

    p(root)

    dfs(binary_tree[root].first);
    dfs(binary_tree[root].second);
}

void bfs(ll root){

    queue<ll> q;
    q.push(root);

    while (!q.empty())
    {
        ll node = q.front();
        p(node)
        q.pop();

        if(binary_tree[node].first !=-1){
            q.push(binary_tree[node].first);
        }

        if(binary_tree[node].second !=-1){
            q.push(binary_tree[node].second);
        }
    }
    
}

int main(){
    ll n;
    cin>>n;

    binary_tree.assign(n+2, {-1,-1});

    for(ll i=0;i<n;i++){
        ll node, left_child,right_child;
        cin>>node>>left_child>>right_child;

        binary_tree[node].first = left_child;
        binary_tree[node].second = right_child;
    }

    p("DFS (Preorder): ")
    dfs(0); // Start DFS from root (assuming 0 as root)
    px

    p("BFS (Level order): ")
    bfs(0); // Start BFS from root
    px
    return 0;
}
#include <bits/stdc++.h>
#define ll long long
#define m(x) cout << x << " ";
using namespace std;

void inorder(ll root, vector<vector<ll>>& tree){
    if(tree[root].size()==0){
        if(root!=-1) m(root)
        return;
    } else {
        if(root!=-1){
            inorder(tree[root][0], tree);
            m(root);
            inorder(tree[root][1], tree);
        }
    }
}

void preorder(ll root, vector<vector<ll>>& tree){
    if(tree[root].size()==0){
        if(root!=-1) m(root)
        return;
    } else {
        if(root!=-1){
            m(root)
            preorder(tree[root][0], tree);
            preorder(tree[root][1], tree);
        }
    }
}

void postorder(ll root, vector<vector<ll>>& tree){
    if(tree[root].size()==0){
        if(root!=-1) m(root);
        return;
    } else {
        if(root!=-1){
            postorder(tree[root][0], tree);
            postorder(tree[root][1], tree);
            m(root);
        }
    }
}

void dfs(ll root, vector<vector<ll>>& tree){
    if(root!=-1) m(root);
    for(ll child : tree[root]){
        if(child!=-1){
            dfs(child, tree);
        }
    }
}

void bfs(ll root, vector<vector<ll>>& tree){
    queue<ll> q;
    q.push(root);
    while(!q.empty()){
        ll curr = q.front();
        m(curr)
        q.pop();
        for(ll child : tree[curr]){
            q.push(child);
        }
    }
}


int main() {

    ll n;
    cin>>n;
    vector<vector<ll>> tree(n+1);
    for(ll i=0;i<n;i++){
        ll x,y,z;
        cin>>x>>y>>z;
        tree[x] = {y,z};
    }

    inorder(1, tree);
    cout<<endl;

    dfs(1, tree);
    cout<<endl;
    return 0;
}

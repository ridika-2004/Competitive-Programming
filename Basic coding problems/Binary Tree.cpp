#include <bits/stdc++.h>
#define ll long long
#define p(x) cout << x <<" ";
#define br cout<<endl;
using namespace std;

ll diameteroftree(ll root, vector<vector<ll>> tree){
    if(tree[root].size()==0){
        return 1LL;
    }
    else if(tree[root].size()==1){
        return diameteroftree(tree[root][0], tree);
    } else {
        ll left = heightoftree(tree[root][0], tree);
        ll right = heightoftree(tree[root][1], tree);
        ll res1 =  1LL+left+right;

        ll left_dia = diameteroftree(tree[root][0], tree);
        ll right_dia = diameteroftree(tree[root][1], tree);
        return max({res1, left_dia, right_dia});
    }
}

ll heightoftree(ll root, vector<vector<ll>> tree){
    if(tree[root].size()==0){
        return 0LL;
    }
    else if(tree[root].size()==1){
        return 1LL+heightoftree(tree[root][0], tree);
    } else {
        ll left = heightoftree(tree[root][0], tree);
        ll right = heightoftree(tree[root][1], tree);
        return 1LL+max(left,right);
    }
}

void printtree(const vector<vector<ll>> tree) {
    for (ll i = 1; i <= tree.size(); ++i) {
        p("Node " << i << ":")
        for (ll child : tree[i]) {
            p(child)
        }
        br
    }
}

void inorder(ll root, vector<vector<ll>> tree){
    if(tree[root].size()==0){
        p(root)
        return;
    }
    else if(tree[root].size()==1){
        inorder(tree[root][0], tree);
        p(root)
    }
    else {
        inorder(tree[root][0], tree);
        p(root)
        inorder(tree[root][1], tree);
    }
}

void preorder(ll root, vector<vector<ll>> tree){
    if(tree[root].size()==0){
        p(root)
        return;
    }
    else if(tree[root].size()==1){
        preorder(tree[root][0], tree);
        p(root)
    }
    else {
        p(root)
        preorder(tree[root][0], tree);
        preorder(tree[root][1], tree);
    }
}

void postorder(ll root, vector<vector<ll>> tree){
    if(tree[root].size()==0){
        p(root)
        return;
    }
    else if(tree[root].size()==1){
        postorder(tree[root][0], tree);
        p(root)
    }
    else {
        postorder(tree[root][0], tree);
        postorder(tree[root][1], tree);
        p(root)
    }
}

void dfs(ll root, vector<vector<ll>> tree){
    p(root)
    for(ll child : tree[root]){
        dfs(child, tree);
    }
}

void bfs(ll root, vector<vector<ll>> tree){
    queue<ll> q;
    q.push(root);

    while(!q.empty()){
        ll curr = q.front();
        p(curr)
        q.pop();

        for(ll child : tree[curr]){
            q.push(child);
        }
    }
}

int main() {

    // diameter of this tree
    // height of this tree

    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<vector<ll>> tree(7);
    tree[1] = {2, 3};
    tree[2] = {4, 5};
    tree[3] = {6, 7};
    tree[4] = {8};

    p(diameteroftree(1, tree))
    br

    // p(tree.size())
    // br

    // postorder(1,tree);
    // br

    // printtree(tree);

    // dfs(1, tree);
    // br
    // bfs(1,tree);
    // br

    return 0;
}

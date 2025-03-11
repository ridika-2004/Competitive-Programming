#include <bits/stdc++.h>
#define ll long long
#define p(x) cout << x << " ";
#define px cout << endl;
using namespace std;

vector<pair<ll, ll>> binary_search_tree;
vector<ll> values;
ll node_count = 0;

ll insert(ll root, ll value) {
    if (root == -1) {
        if (node_count >= values.size()) return root; // Prevent out-of-bounds
        values[node_count] = value;
        return node_count++;
    }

    if (value < values[root]) {
        if (binary_search_tree[root].first == -1) {
            binary_search_tree[root].first = node_count;
            values[node_count++] = value;
        } else {
            insert(binary_search_tree[root].first, value);
        }
    } else {
        if (binary_search_tree[root].second == -1) {
            binary_search_tree[root].second = node_count;
            values[node_count++] = value;
        } else {
            insert(binary_search_tree[root].second, value);
        }
    }

    return root;
}

void dfs(ll root) {
    if (root == -1) return;

    p(values[root])
    dfs(binary_search_tree[root].first);
    dfs(binary_search_tree[root].second);
}

void bfs(ll root) {
    queue<ll> q;
    q.push(root);

    while (!q.empty()) {
        ll node = q.front();
        q.pop();
        p(values[node])

        if (binary_search_tree[node].first != -1) {
            q.push(binary_search_tree[node].first);
        }

        if (binary_search_tree[node].second != -1) {
            q.push(binary_search_tree[node].second);
        }
    }
}

int main() {
    ll n;
    cin >> n;

    binary_search_tree.assign(n + 2, {-1, -1});
    values.assign(n + 2, -1);

    ll root = -1;
    for (ll i = 0; i < n; i++) {
        ll val;
        cin >> val;

        if (i == 0) {
            root = node_count;
            values[node_count++] = val;
        } else {
            insert(root, val);
        }
    }

    if (root != -1) {
        px  // Ensure proper spacing
        p("DFS (Preorder): ")
        dfs(root);
        px

        p("BFS (Level order): ")
        bfs(root);
        px
    } else {
        p("Tree is empty!")
        px
    }

    return 0;
}

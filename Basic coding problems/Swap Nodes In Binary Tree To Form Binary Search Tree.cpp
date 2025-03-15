#include <bits/stdc++.h>
#define ll long long
#define p(x) cout << x << " ";
#define px cout << endl;
#define max_size 1048
using namespace std;

vector<ll> bst(max_size,-1);
vector<ll> inorder_indices;

void inorder(ll index) {
    if (index >= max_size || bst[index] == -1) return;

    inorder(2 * index + 1);
    inorder_indices.push_back(index);
    inorder(2 * index + 2);
}

void recoverBST() {
    inorder_indices.clear();
    inorder(0);

    ll first = -1, second = -1;
    
    
    for (ll i = 0; i < inorder_indices.size() - 1; i++) {
        if (bst[inorder_indices[i]] > bst[inorder_indices[i + 1]]) {
            if (first == -1) { 
                first = inorder_indices[i];
            }
            second = inorder_indices[i + 1];
        }
    }
    if (first != -1 && second != -1) {
        swap(bst[first], bst[second]);
    }
}

int main() {
    ll t,i=0;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        bst[i] = n;
        i++;
    }
    // inorder(0);
    // for(ll i: inorder_indices){
    //     p(bst[i])
    // }

    recoverBST();
    for (ll j = 0; j < i; j++) {
        p(bst[j]);
    }
    px
    return 0;
}
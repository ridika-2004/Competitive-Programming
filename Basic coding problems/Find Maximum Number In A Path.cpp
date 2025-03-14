#include <bits/stdc++.h>
#define ll long long
#define p(x) cout << x << " ";
#define px cout << endl;
#define max_size 1048
using namespace std;

vector<ll> bst(max_size,-1);

void insert(ll value) {
    ll index = 0;
    
    while (index < max_size) {
        if (bst[index] == -1) {
            bst[index] = value;
            return;
        } 
        else if (value < bst[index]) {
            index = 2 * index + 1;
        } 
        else {
            index = 2 * index + 2;
        }
    }
}


void inorder(ll index) {
    if (index >= max_size || bst[index] == -1) {
        return;
    }
    inorder(2 * index + 1);
    p(bst[index])
    inorder(2 * index + 2);
}


void bfs() {
    for (ll i = 0; i < max_size; i++) {
        if (bst[i] != -1) {
            p(bst[i])
        }
    }
    px
}

vector<ll> findpathfromroot(ll a){
    ll index = 0;
    vector<ll> indices;
    indices.push_back(bst[index]);
    while(index<max_size && bst[index]!=-1){
        if(a>bst[index]){
            index = 2*index+2;
            indices.push_back(bst[index]);
        } else if(a<bst[index]){
            index = 2*index+1;
            indices.push_back(bst[index]);
        } else {
            break;
        }
    }

    return indices;
}

int main() {
    ll n;
    cin >> n;

    for (ll i = 0; i < n; i++) {
        ll val;
        cin >> val;
        insert(val);
    }

    ll t;
    cin>>t;
    while(t--){
        ll x,y;
        cin>>x>>y;
        vector<ll> res1 = findpathfromroot(x);
        vector<ll> res2 = findpathfromroot(y);
        vector<ll> res2copy = res2;

        sort(res1.begin(),res1.end());
        sort(res2.begin(),res2.end());

        ll lca = bst[0];
        ll lca_pos = 0;

        for(ll i: res2){
            auto it = find(res1.begin(),res1.end(),i);
            if(it!=res1.end()){
                lca = *it;
                lca_pos = distance(res2copy.begin(), find(res2copy.begin(), res2copy.end(), *it));
                break;
            }
        }
        sort(res2copy.begin()+lca_pos, res2copy.end());
        p(res2copy[res2copy.size()-1])
        cout<<endl;

    }

    return 0;
}

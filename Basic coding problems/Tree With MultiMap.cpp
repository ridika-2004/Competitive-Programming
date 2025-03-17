#include <bits/stdc++.h>
#define ll long long
#define m(x) cout << x << " ";
#define p(x) cout << x << endl;
using namespace std;

void print(multimap<ll,ll> tree, ll root, ll level =0){
    for(ll i=0;i<level;i++){
        m(" ")
    }
    p(root)

    auto range = tree.equal_range(root);
    for(auto it = range.first;it!=range.second;it++){
        print(tree,it->second,level+1);
    }
}

int main() {

    //multiset<ll> ms={1,2,4,4,4,4,4,5,5,6,7};

    multimap<ll,ll> tree;
    tree.insert({1, 2});
    tree.insert({1, 3});
    tree.insert({2, 4});
    tree.insert({2, 5});
    tree.insert({3, 6});

    print(tree,1);

    // for(auto i: mp){
    //     p(i.first<<" "<<i.second)
    // }
    return 0;
}

#include<bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

vector<ll> tree[1005];

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;

    for(ll i=2;i<=t;i++){
        ll n;
        cin>>n;
        tree[n].push_back(i);
    }

    for(ll i = 1; i <= t; i++) {
        if(!tree[i].empty()){
            ll leafcount = 0;
            for(auto child : tree[i]){
                if(tree[child].empty()){
                    leafcount++;
                }
            }

            if(leafcount<3){
                p("No")
                return 0;
            }
        }
    }

    p("Yes")
    return 0;
}
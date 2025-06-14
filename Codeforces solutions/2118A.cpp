#include<bits/stdc++.h>
#define ll long long
#define p(x) cout << x <<endl;
#define mod 998244353
using namespace std;

void print(vector<ll> a){
    for(ll i=0;i<a.size();i++){
        cout<<a[i];
    }
    cout<<endl;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll> a(n);
        for(ll i=0;i<k;i++){
            a[i] = 1;
        }
        for(ll i=k;i<n;i++){
            a[i] = 0;
        }

        print(a);
    }

    return 0;
}

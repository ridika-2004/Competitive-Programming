#include<bits/stdc++.h>
#define ll long long
#define p(x) cout << x <<endl;
#define mod 998244353
using namespace std;

void print(vector<ll> a){
    for(ll i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;

        vector<ll> a;
        if(n&1){
            for(ll i=1;i<=n;i+=2){
                a.push_back(i);
            }

            for(ll i=n-1;i>=2;i-=2){
                a.push_back(i);
            }
        } else {
            for(ll i=1;i<n;i+=2){
                a.push_back(i);
            }

            for(ll i=n;i>=2;i-=2){
                a.push_back(i);
            }
        }

        print(a);
    }

    return 0;
}

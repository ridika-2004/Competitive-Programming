#include<bits/stdc++.h>
#define ll long long
#define p(x) cout << x <<endl;
#define mod 998244353
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(ll i = 0; i < n; i++){
            cin>>a[i];
        }

        sort(a.begin(), a.end());
        a[0] +=1;
        ll sum = 1;
        for(ll i: a){
            sum*=i;
        }

        p(sum)
    }
    return 0;
}

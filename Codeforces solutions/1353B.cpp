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
        ll n,k;
        cin>>n>>k;
        vector<ll> a(n),b(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }

        for(ll i=0;i<n;i++){
            cin>>b[i];
        }

        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend());

        ll sum = 0;

        for(ll i=0;i<n;i++){
            if(k>0 && a[i]<b[i]) {
                a[i] = b[i];
                k--;
            }

            sum += a[i];
        }

        p(sum)
    }

    return 0;
}

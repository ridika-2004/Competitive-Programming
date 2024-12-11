#include <bits/stdc++.h>
#define ll long long
#define p(x) cout << x << endl;
#define m(x) cout << x << " ";
using namespace std;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin>>n;
        ll ans=1,sum=1;
        while(sum<n){
            ans++;
            sum = (sum+1)*2;
        }
        p(ans)
    }
    return 0;
}
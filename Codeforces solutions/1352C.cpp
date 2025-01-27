#include <bits/stdc++.h>
#define p(x) cout << x << endl;
using namespace std;
#define ll long long


int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        ll res = k + (k - 1) / (n - 1);
        p(res)
    }
    return 0;
}

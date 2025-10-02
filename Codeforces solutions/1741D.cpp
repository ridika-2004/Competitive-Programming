#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define p(x) cout << x << "\n";

void swaparray(vector<ll> &v, ll l, ll r) {
    ll len = (r - l + 1) / 2;
    for (ll i = 0; i < len; i++)
        swap(v[l + i], v[l + len + i]);
}

ll solve(vector<ll> &v, ll l, ll r){
    if(l==r) return 0;
    ll m = (l+r)/2;
    ll res = 0;
    res += solve(v,l,m);
    res += solve(v,m+1,r);

    if(is_sorted(v.begin()+l,v.begin()+r+1)) return res;
    else {
        swaparray(v,l,r);
        return res+1;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        ll m; 
        cin >> m;
        vector<ll> a(m+1);
        for (int i = 1; i <= m; ++i) {
            cin >> a[i];
        }

        // swaparray(a, 1, (m) / 2, m);
        ll ans = solve(a, 1, m);

        if(is_sorted(a.begin()+1,a.end())){
            p(ans)
        } else {
            p(-1)
        }
    }
    return 0;
}

#include <bits/stdc++.h>
#define ll long long
#define p(x) cout << x <<" ";
#define br cout<<endl;
using namespace std;


int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        vector<string> v(n);
        for(ll i = 0; i < n; i++) {
            cin >> v[i];
        }

        string res = "NO";

        string check = "vika";
        ll idx = 0;
        for(ll i=0;i<m;i++){
            for(ll j=0;j<n;j++){
                if(v[j][i]==check[idx]){
                    idx++;
                    break;
                }
            }

            if(idx==4){
                res = "YES";
                break;
            }
        }

        p(res)
        br
    }
    return 0;
}

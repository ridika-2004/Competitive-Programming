#include <bits/stdc++.h>
#define ll long long
#define p(x) cout << x << endl;
#define m(x) cout << x << " ";
using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--){
        ll n,a,b;
    cin>>n>>a>>b;
    ll x = abs(a-b);
    if(x&1){
        p("NO")
    } else {
        p("YES")
    }
    }
    return 0;
}
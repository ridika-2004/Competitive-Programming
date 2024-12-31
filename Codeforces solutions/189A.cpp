#include <bits/stdc++.h>
#define ll long long
#define p(x) cout << x << endl;
#define m(x) cout << x << " ";
using namespace std;

int main() {
    ll n,a,b,c;
    cin>>n>>a>>b>>c;
    ll maxx =0;
    for(ll i=0;i<=(n/a);i++){
        for(ll j=0;j<=(n-(i*a))/b;j++){
            ll r = n-(i*a)-(j*b);
            if(r%c==0){
                ll k = r/c;
                maxx = max(maxx, i+j+k);
            }
        }
    }
    p(maxx)
    return 0;
}
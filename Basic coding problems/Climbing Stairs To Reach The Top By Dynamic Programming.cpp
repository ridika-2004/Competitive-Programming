#include <bits/stdc++.h>
#define ll long long
#define p(x) cout << x << endl;
#define m(x) cout << x << " ";
using namespace std;

// ll countways(ll n){
//     if(n==0 || n==1){
//         return 1;
//     }
//     return countways(n-1)+countways(n-2);
// }

// ll countwaysutil(ll n, vector<ll> &v){
//     if(n==0 || n==1){
//         return 1;
//     } else if(v[n]!=-1){
//         return v[n];
//     } else {
//         return countwaysutil(n-1,v)+countwaysutil(n-2,v);
//     }
// }
// ll countways(ll n){
//     vector<ll> v(n+1,-1);
//     return countwaysutil(n,v);
// }

// ll countways(ll n){
//     vector<ll> v(n+1);
//     v[0] =1;
//     v[1] =1;
//     for(ll i=2;i<=n;i++){
//         v[i]=v[i-1]+v[i-2];
//     }
//     return v[n];
// }

ll countways(ll n){
    ll f1 =1;
    ll f2 =1;
    ll res;
    for(ll i=2;i<=n;i++){
        res = f1+f2;
        f1 = f2;
        f2 = res;
    }
    return res;
}

int main(){

    ll n;
    cin>>n;
    ll res = countways(n);
    p(res)
    return 0;
}

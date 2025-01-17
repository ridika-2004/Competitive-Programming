#include <bits/stdc++.h>
#define ll long long
#define p(x) cout << x << endl;
#define m(x) cout << x << " ";
using namespace std;

// ll tribonacchi(ll n){
//     if(n==0 || n==1){
//         return 0;
//     } else if(n==2 || n==3){
//         return 1;
//     }

//     return tribonacchi(n-1)+tribonacchi(n-2)+tribonacchi(n-3);
// }

// ll tribonacchiutil(ll n, vector<ll> &v){
//     if(n==0 || n==1){
//         return 0;
//     } else if(n==2 || n==3){
//         return 1;
//     } else if(v[n]!=-1){
//         return v[n];
//     }

//     v[n] = tribonacchiutil(n-1,v)+tribonacchiutil(n-2,v)+tribonacchiutil(n-3,v);
//     return v[n];
// }
// ll tribonacchi(ll n){
//    vector<ll> v(n+1,-1);
//    return tribonacchiutil(n,v);
// }

// ll tribonacchi(ll n){
//     vector<ll> v(n+1);
//     v[0]=v[1]=0;
//     v[2]= 1;
//     for(ll i=3;i<=n;i++){
//         v[i] = v[i-1]+v[i-2]+v[i-3];
//     }
//     return v[n];
// }

ll tribonacchi(ll n){
    ll first=0, second=0, third =1,res=0;
    for(ll i=3;i<=n;i++){
        res = first+second+third;
        first = second;
        second = third;
        third = res;
    }
    return res;
}

int main(){

    ll n;
    cin>>n;
    ll res = tribonacchi(n);
    p(res)
    return 0;
}

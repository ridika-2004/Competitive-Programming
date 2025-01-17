#include <bits/stdc++.h>
#define ll long long
#define p(x) cout << x << endl;
#define m(x) cout << x << " ";
using namespace std;

ll countvalues(ll n){
    int unsetbits =0;
    while(n){
        if((n&1)==0){
            unsetbits++;
        }
        n= n>>1;
    }

    return 1LL<<unsetbits;
}

int main(){
    ll n;
    cin>>n;
    ll res = countvalues(n);
    p(res)
    return 0;
}
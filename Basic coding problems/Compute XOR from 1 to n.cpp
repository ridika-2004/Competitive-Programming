#include <bits/stdc++.h>
#define ll long long
#define p(x) cout << x << endl;
#define m(x) cout << x << " ";
using namespace std;

ll computeXOR(ll n){
    if(n%4==0) return n;
    if(n%4==1) return 1;
    if(n%4==2) return n+1;
    if(n%4==3) return 0;
}

int main(){
    ll n;
    cin>>n;
    ll res = computeXOR(n);
    p(res)
    return 0;
}
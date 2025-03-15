#include<bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n,res=1;
        cin>>n;
        for(ll i=1;i<=n/2;i++){
            res+=i*(n-i)+1;
        }
        p(res)
    }
    return 0;
}



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
        ll n;
        cin>>n;

        if(n>3){
            p(3*n-3)
        } else {
            p(-1)
        }
    }
    return 0;
}
#include<bits/stdc++.h>
#define ll long long
#define p(x) cout << x <<endl;
#define mod 998244353
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;

    while(t--){
        ll a,b,c;
        cin>>a>>b>>c;
        if(c&1){
            a++;
        }
        if(a>b){
            p("First")
        } else {
            p("Second")
        }
    }

    return 0;
}

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
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll mini = min({a, b, c, d});
        if(mini==b || mini==d){
            p("Gellyfish")
        } else {
            p("Flower")
        }
    }
    return 0;
}

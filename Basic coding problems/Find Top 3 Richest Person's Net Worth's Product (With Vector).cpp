#include <bits/stdc++.h>
#define ll long long
#define p(x) cout << x <<endl;
using namespace std;

int main(){

    ll n;
    cin>>n;
    vector<ll> v(n,1);
    for(ll i=0;i<n;i++){
        cin>>v[i];
        if(i==0 || i==1){
            p(-1)
        } else {
            sort(v.rbegin(),v.rend());
            p(v[0]*v[1]*v[2])
        }
    }


    return 0;
}
#include<bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;

        ll res = (n*(n+1))/2;
        ll sqrtres = sqrt(res);
        if(sqrtres*sqrtres == res){
            p(-1)
        }else{
            vector<ll> v;
            for(ll i=1; i<=n; i++){
                v.push_back(i);
            }

            for(ll i=0; i<v.size()-1; i++){
                ll res1 = (v[i]*(v[i+1]))/2;
                ll sqrtres1 = sqrt(res1);
                if(sqrtres1*sqrtres1 == res1){
                    // p("swapped "<<v[i]<<" "<<v[i+1])
                    swap(v[i], v[i+1]);
                }
            }
            for(ll i=0; i<v.size(); i++){
                cout<<v[i]<<" ";
            }
            cout << endl;
        }
    }

    return 0;
}
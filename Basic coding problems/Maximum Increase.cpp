#include<bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

ll solve(vector<ll> v, ll i, ll count, ll res){
    if(i==v.size()-1){
        return max(res, count);
    } 
    
    else {
        if(v[i]<v[i+1]) {
            count++;
        } else {
            res = max(res, count);
            count = 1;
        }
        
        return solve(v,i+1,count, res);     
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;

    vector<ll> v(n);

    for(ll &i : v){
        cin>>i;
    }

    ll res = solve(v, 0, 1, 0);
    p(res)
    return 0;
}
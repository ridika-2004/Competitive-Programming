#include<bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<" ";
using namespace std;

ll findmax(vector<ll> v){
    ll maxi = 0,maxv=v[0];
    for(ll i=1;i<v.size();i++){
        if(v[i]>maxv){
            maxi = i;
            maxv = v[i];
        }
    }

    return maxi;
}

ll solve(vector<vector<ll>> v, ll l, ll r){
    ll m = (l+r)/2;
    ll i = findmax(v[m]);
    if(m==v.size()-1){
        if(v[m][i]>=v[m-1][i]){
            return m;
        } else {
            return m-1;
        }
    }
    if(m==0){
        if(v[m][i]>=v[m+1][i]){
            return m;
        } else {
            return m+1;
        }
    }
    if(v[m][i]>=v[m-1][i] && v[m][i]>=v[m+1][i]){
        return m;
    } else {
        if(v[m-1][i]>v[m][i]){
            return solve(v,l, m-1);
        } else {
            return solve(v,m+1,r);
        }
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll m,n;
    cin>>m>>n;

    vector<vector<ll>> v(m, vector<ll>(n));

    for(ll i=0;i<m;i++){
        for(ll j=0;j<n;j++){
            cin>>v[i][j];
        }
    }

    // p(v.size())
    ll maxrow = solve(v,0,m-1);
    ll maxcol = findmax(v[maxrow]);
    p(maxrow+1<<" "<<maxcol+1)
    return 0;
}
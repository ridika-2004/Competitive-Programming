#include<bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<" ";
using namespace std;

bool canship(vector<ll> v, ll d, ll sum){
    ll c = 1, i =0, tot = 0;
    while(i<v.size()){
        if(tot+v[i]<=sum){
            tot+= v[i];
            i++;
        } else {
            c++;
            tot = v[i];
            i++;
        }
    }

    return c<=d;
}

ll solve(vector<ll> v, ll d, ll l, ll r){
    ll mid = (l+r)/2;
    if (l == r) return l;
    if(canship(v, d, mid)){
        return solve(v,d, l, mid);
    } else {
        return solve(v, d, mid+1, r);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,d, sum=0, maxx=INT_MIN;
    cin>>n>>d;

    vector<ll> v(n);
    for(ll &i : v){
        cin>>i;
        sum+=i;
        maxx = max(maxx,i);
    }

    ll res = solve(v, d, 1, sum);
    p(max(res,maxx))
    
    return 0;
}
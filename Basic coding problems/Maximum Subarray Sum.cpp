#include<bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<" ";
using namespace std;

ll countright(vector<ll> v){
    ll maxx = 0, sum=0;
    for(ll i=0;i<v.size();i++){
        sum+=v[i];
        maxx = max(sum, maxx);
    }
    return maxx;
}

ll countleft(vector<ll> v){
    ll maxx = 0, sum=0;
    for(ll i=v.size()-1;i>=0;i--){
        sum+=v[i];
        maxx = max(sum, maxx);
    }
    return maxx;
}

ll solve(vector<ll> v){
    if(v.size()==1){
        return max(v[0],0LL);
    }
    ll m = v.size()/2;
    vector<ll> l(v.begin(), v.begin()+m);
    vector<ll> r(v.begin()+m, v.end());

    ll sum = 0;
    ll leftmax = solve(l);
    ll rightmax = solve(r);
    ll crossmax = countleft(l) + countright(r);
    return max({leftmax, rightmax, crossmax});
}

void print(vector<ll> v){
    for(ll i : v){
        p(i)
    }
    p("\n")
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;

    vector<ll> v(n);

    for(ll &i: v){
        cin>>i;
    }

    ll result = solve(v);
    p(result<<"\n")

    return 0;
}
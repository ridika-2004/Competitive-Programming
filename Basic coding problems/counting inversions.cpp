#include<bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<" ";
using namespace std;

ll count(vector<ll> &v, ll l, ll m, ll r){
    vector<ll> v1(v.begin()+l, v.begin()+m);
    vector<ll> v2(v.begin()+m, v.begin()+r);
    ll count = 0;
    ll i=0,j=0,k=l;
    while(i<v1.size() && j<v2.size()){
        if(v1[i]<=v2[j]){
            v[k] = v1[i];
            i++;
            k++;
        } else {
            v[k] = v2[j];
            count+= v1.size() - i;
            j++;
            k++;
        }
    }

    while(i<v1.size()){
        v[k] = v1[i];
        i++;
        k++;
    }

    while(j<v2.size()){
        v[k] = v2[j];
        k++;
        j++;
    }

    return count;
}

ll solve(vector<ll> &v, ll l, ll r){

    if(r-l<=1){
        return 0;
    }

    ll c = 0;
    ll m = (l+r)/2;

    c+= solve(v, l, m);
    c+= solve(v, m, r);
    c+= count(v, l, m, r);
    return c;
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

    ll res = solve(v, 0, n);
    p(res)
    
    return 0;
}
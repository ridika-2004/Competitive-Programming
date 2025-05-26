#include<bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<" ";
using namespace std;

vector<ll> merge(vector<ll> v1, vector<ll> v2){
    vector<ll> a;
    ll i=0,j=0;
    while(i<v1.size() && j<v2.size()){
        if(v1[i]<v2[j]){
            a.push_back(v1[i]);
            i++;
        } else {
            a.push_back(v2[j]);
            j++;
        }
    }

    while(i<v1.size()){
        a.push_back(v1[i]);
        i++;
    }

    while(j<v2.size()){
        a.push_back(v2[j]);
        j++;
    }

    return a;
}

vector<ll> solve(vector<ll> v){
    if(v.size()==1){
        return v;
    }
    ll m = v.size()/2;
    vector<ll> l(v.begin(), v.begin()+m);
    vector<ll> r(v.begin()+m, v.end());

    vector<ll> left = solve(l);
    vector<ll> right = solve(r);

    return merge(left,right);
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

    for(ll &i : v){
        cin>>i;
    }

    vector<ll> res= solve(v);
    print(res);
    
    return 0;
}
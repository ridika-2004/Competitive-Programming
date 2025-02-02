#include<bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

int main(){
    ll n;
    cin>>n;
    vector<ll> v1(n);
    for(ll &i: v1){
        cin>>i;
    }
    sort(v1.begin(),v1.end());
    ll m;
    cin>>m;
    vector<ll> v2(m);
    for(ll &i: v2){
        cin>>i;
    }
    sort(v2.begin(),v2.end());
    ll i=0,j=0,res=0;
    while(i<v1.size() && j<v2.size()){
        if(abs(v1[i]-v2[j])<=1){
            i++;
            j++;
            res++;
        }
        else if(v1[i]-v2[j]<-1){
            i++;
        } else if(v1[i]-v2[j]>1){
            j++;
        }
    }
    p(res)
    return 0;
}
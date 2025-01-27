#include<bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

int main(){
    ll n,m;
    cin>>n>>m;
    vector<ll> a(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    ll max_count=0,sum=0,start=0;
    for(ll i=0;i<n;i++){
        sum+=a[i];
        while(sum>m){
            sum-=a[start];
            start++;
        }
        max_count=max(max_count,i-start+1);
    }
    p(max_count)
    return 0;
}
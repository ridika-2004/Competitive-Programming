#include<bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        priority_queue<ll> pq;
        for(ll i=0;i<n;i++){
            ll temp;
            cin>>temp;
            pq.push(temp);
        }
        ll x=0;
        priority_queue<ll> pq1;
        while(!pq.empty()){
            ll top = pq.top();
            pq.pop();
            top += (x * k);
            pq1.push(top);
            x++;
        }
        p(pq1.top());
    }
    return 0;
}
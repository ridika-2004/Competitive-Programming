#include <bits/stdc++.h>
#define ll long long
#define p(x) cout << x <<endl;
using namespace std;

int main(){

    ll n;
    cin>>n;
    priority_queue<ll> pq;
    // priority_queue<ll, vector<ll>, greater<ll>> pq; // Min-Heap
    for(ll i=0;i<n;i++){
        ll a;
        cin>>a;
        pq.push(a);
        if(i==0 || i==1){
            p(-1)
        } else {
            priority_queue<ll> pqcopy = pq;
            ll x1 = pqcopy.top();
            pqcopy.pop();
            ll x2 = pqcopy.top();
            pqcopy.pop();
            ll x3 = pqcopy.top();
            pqcopy.pop();

            p(x1*x2*x3)
        }
    }


    return 0;
}
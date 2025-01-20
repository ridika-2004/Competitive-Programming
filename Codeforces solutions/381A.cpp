#include <bits/stdc++.h>
#define p(x) cout<<x<<endl;
using namespace std;
#define ll long long

int main(){
    ll n;
    cin>>n;
    deque<ll> d;
    while(n--){
        ll a;
        cin>>a;
        d.push_back(a);
    }
    ll c1=0,c2=0,c=0;
    while(d.size()>0){
        if(c&1){
            if(d.front()>d.back()){
                c2+=d.front();
                d.pop_front();
            } else {
                c2+=d.back();
                d.pop_back();
            }
        } else {
            if(d.front()>d.back()){
                c1+=d.front();
                d.pop_front();
            } else {
                c1+=d.back();
                d.pop_back();
            }
        }
        c++;
    }

    p(c1<<" "<<c2)
    return 0;
}
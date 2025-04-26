#include<bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;

    stack<pair<ll,ll>> s;
    while(n--){
        ll a;
        cin>>a;
        if(s.empty()){
            s.push({a,1});
        } else {
            ll x = s.top().first;
            if(x==a){
                ll y = s.top().second;
                s.push({a,y+1});
                if(s.top().second==s.top().first){
                    ll z = s.top().second;
                    while (z>0 && !s.empty()){
                        s.pop();
                        z--;
                    }
                }
            } else {
                s.push({a,1});
            }
        }

        p(s.size())
    }
    return 0;
}

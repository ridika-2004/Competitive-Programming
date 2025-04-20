#include<bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;

        deque<ll> d,res;
        for(ll i=1;i<=n;i++){
            d.push_back(i);
        }

        for(ll i=s.size()-1;i>=0;i--){
            if(s[i]=='<'){
                res.push_front(d.front());
                d.pop_front();
            } else {
                res.push_front(d.back());
                d.pop_back();
            }
        }

        res.push_front(d.front());
        
        for(ll i: res){
            cout<<i<<" ";
        }
        p("")

    }

    return 0;
}
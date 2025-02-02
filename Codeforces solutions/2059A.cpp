#include<bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> v1(n),v2(n);
        map<ll,ll> m1,m2;
        for(ll i=0;i<n;i++){
            cin>>v1[i];
            m1[v1[i]]++;
        }
        for(ll i=0;i<n;i++){
            cin>>v2[i];
            m2[v2[i]]++;
        }
        if(m1.size()>=3 || m2.size()>=3){
            p("yes")
        } else if(m1.size()==2 && m2.size()==2){
            auto i = m1.begin();
            auto j = m2.begin();
            if(i->first==j->first && i->second==j->second && (++i)->first==(++j)->first && (++i)->second==(++j)->second){
                p("NO")
            } else{
                p("Yes")
            }
        } else{
            p("no")
        }
    }
    return 0;
}
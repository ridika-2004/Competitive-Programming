#include <bits/stdc++.h>
#define p(x) cout<<x<<endl;
#define ll long long
using namespace std;

int main() {
	ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll x = count(s.begin(),s.end(),'1');
        ll y = count(s.begin(),s.end(),'0');
        if(!x || !y){
            p(s.size())
        } else {
            p(1)
        }
    }
}

#include<iostream>
#include<vector>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

int main() {
    ll t;
    cin>>t;
    vector<ll> v(t+1,0);
    t--;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        v[a]++;
        v[b]++;
    }
    bool ok = 1;
    for(ll i:v)
    {
        if(i==2)
        {
            p("NO")
            ok = 0;
            break;
        }
    }
    if(ok)
    {
        p("YES")
    }
    return 0;
}
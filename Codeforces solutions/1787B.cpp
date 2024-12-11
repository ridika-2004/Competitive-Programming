#include <bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
#define m(x) cout<<x<<" ";
using namespace std;


int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll c=0,ans=0;
        map<ll,ll> m;
        for(ll i=2;i*i<=n;i++)
        {
            c=0;
            while(n%i==0)
            {
                c++;
                n/=i;
                if(m.count(c)==0)
                {
                    m[c] = i;
                }
                else
                {
                    m[c]*=i;
                }
            }
        }
        if(n!=1)
        {
            if(m.count(1)==0)
            {
                m[1]=n;
            }
            else
            {
                m[1]*=n;
            }
        }
        for(auto it = m.begin();it!=m.end();it++)
        {
            ans+=it->second;
        }

        p(ans)
    }
    return 0;
}
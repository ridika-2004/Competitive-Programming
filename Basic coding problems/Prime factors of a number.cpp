#include <bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
#define m(x) cout<<x<<" ";
using namespace std;


int main() {
    ll n;
    cin>>n;
    for(ll i=2;i*i<=n;i++)
    {
        while(n%i==0)
        {
            m(i)
            n/=2;
        }
    }
    if(n!=1)
    {
        m(n)
    }
    p("")
    return 0;
}
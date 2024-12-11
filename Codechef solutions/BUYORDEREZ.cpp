#include<iostream>
#include<cmath>
#include<string>
#define p(x) cout<<x<<endl;
#define m(x) cout<<x<<" ";
#include<iomanip>
#include<set>
#include<stack>
#include<map>
#include<vector>
#include<algorithm>
#include<numeric>
#include<bitset>
#include<utility>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pll pair<long long, long long>
#define pb push_back
#define mp make_pair
#define mod 1000000007
using namespace std;


int main ()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++)cin>>v[i];
        ll x = (n-2)*2;
        if(v[0]==0 && v[n-1]==1)
        {
            p((2*n)-2)
        }
        else
        {
            p((2*n)-1)
        }
    }
    return 0;
}


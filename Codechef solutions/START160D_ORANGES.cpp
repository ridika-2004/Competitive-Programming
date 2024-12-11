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
        ll n,k;
        cin>>n>>k;
        ll x = n*10;
        ll y = n*12;
        if(k>=x && k<=y)
        {
            p("YES")
        }
        else
        {
            p("NO")
        }
    }
    return 0;
}


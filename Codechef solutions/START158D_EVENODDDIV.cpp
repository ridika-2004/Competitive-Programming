#include<iostream>
#include<cmath>
#include<string>
#define p(x) cout<<x<<endl;
#define m(x) cout<<x;
#include<iomanip>
#include<set>
#include<stack>
#include<map>
#include<vector>
#include<algorithm>
#include<numeric>
#include<bitset>
#include<utility>
#define pll pair<ll, ll>
#define ll long long
#define mod 1000000007
using namespace std;

int main ()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n&1)
        {
            p(-1)
        }
        else
        {
            if(n%4==0)
            {
                p(1)
            }
            else
            {
                p(0)
            }
        }
    }
    return 0;
}

#include<iostream>
#include<string>
#define p(x) cout<<x<<endl;
#define m(x) cout<<x;
#include<iomanip>
#include<vector>
#include<stack>
#include<map>
#include<math.h>
#define pll pair<ll, ll>
#include<set>
#include<iomanip>
#include<algorithm>
#include<numeric>
#define ll long long
using namespace std;


int main ()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,c=0;
        cin>>n>>k;
        if(k%2==0)
        {

        for(ll i=2;i<=n;i+=2)
        {
            if(i==k)
            {
                continue;
            }
            if((i+k)%2==0)
            {
                c++;
            }
        }
        }
        else
        {
            for(ll i=1;i<=n;i+=2)
        {
            if(i==k)
            {
                continue;
            }
            if((i+k)%2==0)
            {
                c++;
            }
        }
        }
        p(c)
    }
    return 0;
}


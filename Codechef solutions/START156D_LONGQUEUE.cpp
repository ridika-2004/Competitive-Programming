
#include<iostream>
#include<string>
#include<iomanip>
#include<vector>
#include<stack>
#include<math.h>
#include<set>
#include<iomanip>
#include<algorithm>
#include<numeric>

#define p(x) cout<<x<<endl;
#define m(x) cout<<x;
#define ll long long
using namespace std;


int main ()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }

        ll x = a[n-1];
        ll y = x/2;
        ll c=0;
        for(ll i=n-2;i>=0;i--)
        {
            if(a[i]<=y)
            {
                c++;
            }
            else
            {
                break;
            }
        }
        p(n-c)
    }
    return 0;
}



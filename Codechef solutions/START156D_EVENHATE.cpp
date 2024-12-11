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
        ll od=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]&1)
            {
                od++;
            }
        }
        if(od==0)
        {
            p("0")
        }
        else
        {
            p(n-(od/2))
        }
    }
    return 0;
}



#include<iostream>
#include<string>
#define p(x) cout<<x<<endl;
#define m(x) cout<<x;
#include<iomanip>
#include<vector>
#include<stack>
#include<math.h>
#include<set>
#include<iomanip>
#include<algorithm>
#include<numeric>
#define ll long long
using namespace std;


int main ()
{
    ll n;
    cin>>n;
    while(n--)
    {
        ll a,b;
        cin>>a>>b;
        ll x= max(a,b);
        ll y = min(a,b);
        if(x>=(2*y))
        {
            p("0")
        }
        else
        {
            ll x2 = x/2;
            ll y2 = y*2;
            ll r1 = abs(y-x2);
            ll r2 = abs(x-y2);
            p(min(r1,r2))
        }
    }
    return 0;
}

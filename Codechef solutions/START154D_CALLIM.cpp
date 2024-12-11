
#include<iostream>
#include<string>
#define p(x) cout<<x<<endl;
#define m(x) cout<<x;
#include<iomanip>
#include<vector>
#include<stack>
#include<math.h>
#include<cmath>
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
        ll n,k;
        cin>>n>>k;
        ll arr[n];
        ll j=0;
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        ll sum=0;
        for(ll i=0;i<n;i++)
        {
            sum+=arr[i];
            if(sum>k)
            {
                break;
            }
            j++;
        }
        p(j)
    }
    return 0;
}


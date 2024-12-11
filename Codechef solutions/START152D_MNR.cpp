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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr+n);
        ll x = arr[n-2]-arr[1];
        ll x1 = arr[n-1]-arr[2];
        ll x2 = arr[n-3]-arr[0];
        p(min(x,min(x1,x2)))
    }
    return 0;
}


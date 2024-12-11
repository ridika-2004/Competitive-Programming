#include<iostream>
#include<string>
#include<iomanip>
#include<vector>
#include<stack>
#include<queue>
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
    ll n,m;
    cin>>n>>m;//number of test cases
    ll arr[n*m];
    ll brr[n*m];
    for(ll i=0;i<n*m;i++)
    {
        cin>>arr[i];
    }
    for(ll i=0;i<n*m;i++)
    {
        cin>>brr[i];
        brr[i] = brr[i]+arr[i];
    }
    for(ll i=0;i<n*m;i++)
    {
        m(brr[i]<<" ")
        if((i+1)%m==0)
        {
            p("")
        }
    }
    return 0;
}


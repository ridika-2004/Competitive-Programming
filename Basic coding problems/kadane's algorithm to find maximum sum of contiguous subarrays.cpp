#include<iostream>
#include<vector>
#define ll long long
#define p(x) cout<<x<<endl;
#define m(x) cout<<x<<" ";
using namespace std;
int main()
{
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
    ll sum=0,maxi=v[0];
    for(ll i=0;i<n;i++)
    {
        sum+=v[i];
        maxi = max(maxi,sum);
        if(sum<0)
        {
            sum = 0;
        }
    }
    p(sum)
    return 0;
}
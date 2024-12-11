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
    ll c0=0,c1=0,maxi=INT_MIN;
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]==0){
            c0++;
        }
        else
        {
            c0--;
            c1++;
        }
        maxi = max(c0,maxi);
        if(c0<0)
        {
            c0 =0;
        }
    }
    p(maxi+c1)
    return 0;
}
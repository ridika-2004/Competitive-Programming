#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
#define m(x) cout<<x<<" ";
#define p(x) cout<<x<<endl;

using namespace std;
int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        vector<ll> v(n-1);
        for(ll i=0;i<n-1;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        vector<ll> a(n);
        a[0] = 1;
        for(ll i=0;i<n-1;i++)
        {
            a[i+1] = v[i]-a[i];
        }
        for(ll i:a)
        {
            m(i)
        } 
        p("")    
    }
    
    return 0;
}
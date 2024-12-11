#include<iostream>
#include<vector>
#define ll long long
#define p(x) cout<<x<<endl;
#define m(x) cout<<x<<" ";
using namespace std;

ll max_sum(vector<ll> &v)
{
    ll sum=0,maxi = INT_MIN;
    for(ll i=0;i<v.size();i++)
    {
        sum+=v[i];
        maxi = max(sum,maxi);
        if(sum<0)
        {
            sum=0;
        }
    }
    return maxi;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> v(n);
        ll sum=0;
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
            if(i%2==0)
            {
                sum+=v[i];
            }
        }
        vector<ll> odd;
        vector<ll> even;
        for(ll i=0;i<n-1;i+=2){
            even.push_back(v[i+1]-v[i]);
        }
        for(ll i=1;i<n-1;i+=2){
            odd.push_back(v[i]-v[i+1]);
        }
        ll r1 = max_sum(odd);
        ll r2 = max_sum(even);
        ll res = max(r1,r2);
        ll zero =0;
        ll res2 = max(res,zero);
        ll ans = sum+res2;
        p(ans)
    }
    return 0;
}
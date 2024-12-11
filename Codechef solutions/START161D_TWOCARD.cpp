#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#define ll long long
#define p(x) cout<<x<<endl;
#define m(x) cout<<x<<" ";
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<pair<ll,ll>> v(n);
        ll maxi =INT_MIN;
        for(ll i=0;i<n;i++){
            cin>>v[i].first;
            maxi = max(maxi, v[i].first);
        }
        for(ll i=0;i<n;i++){
            cin>>v[i].second;
            maxi = max(maxi, v[i].second);
        }
        sort(v.begin(), v.end());
        ll r1 = max(v[n-1].first, v[n-1].second);
        ll r2 = max(v[n-2].first, v[n-2].second);
        if(r1!=maxi)
        {
            p("YES")
        }
        else if(r2==maxi)
        {
            p("NO")
        }
        else
        {
            p("YES")
        }
    }
    return 0;
}
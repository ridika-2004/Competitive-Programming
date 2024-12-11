#include<iostream>
#include<vector>
#include<string>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        char c[n][m];
        for(ll i=0;i<n;i++){for(ll j=0;j<m;j++){cin>>c[i][j];}}
        ll l = min(m,n)/2;
        ll ans=0;
        for(ll i=0;i<l;i++){
            vector<char>v;
            for(ll j=i;j<m-i;j++){
                v.push_back(c[i][j]);
            }
            for(ll j=i+1;j<n-i;j++){
                v.push_back(c[j][m-1-i]);
            }
            for(ll j=m-2-i;j>=i;j--){
                v.push_back(c[n-1-i][j]);
            }
            for(ll j=n-2-i;j>i;j--){
                v.push_back(c[j][i]);
            }
            ll x = v.size();
            for(ll i=0;i<x;i++){
                char c1,c2,c3,c4;
                c1 = v[(i)%x];
                c2 = v[(i+1)%x];
                c3 = v[(i+2)%x];
                c4 = v[(i+3)%x];
                if(c1=='1' && c2=='5' && c3=='4' && c4=='3'){
                    ans++;
                }
            }
        }
        p(ans)
    } 
    return 0;
}
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
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll> a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(), a.end());
        ll sum=0;
        for(ll i=n-1;i>=0;i--){
            if(sum+a[i]>k){
                break;
            }
            sum+=a[i];
        }
        p(k-sum)
    }
    return 0;
}
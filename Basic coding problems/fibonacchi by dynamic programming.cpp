#include<iostream>
#include<vector>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

vector<ll> fibonacci(ll n)
{
    vector<ll> dp(n+1,0);
    dp[0] =0;
    dp[1] =1;
    for(ll i=2;i<=n;i++)
    {
        dp[i] = dp[i-1]+dp[i-2];
    }
    return dp;
}

int main()
{
    ll n;
    cin>>n;
    vector<ll> f = fibonacci(n);
    p(f[n])
    return 0;
}
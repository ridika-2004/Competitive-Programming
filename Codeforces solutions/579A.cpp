#include<iostream>
#include<cmath>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll c=0;
    while(n>1)
    {
        ll x = log2(n);
        ll y = pow(2,x);
        n = n-y;
        c+=1;
    }
    p(n+c)
    return 0;
}
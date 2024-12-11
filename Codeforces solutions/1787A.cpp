#include<iostream>
#include<numeric>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n&1)
        {
            p(-1)
        }
        else
        {
            p(1<<" "<<n/2)
        }
    }
    return 0;
}

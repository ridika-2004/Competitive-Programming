#include<iostream>
#include<vector>
#define ll long long
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
        ll pass = ((n+1)*100)/2;
        while(n--)
        {
            ll a;
            cin>>a;
            pass-=a;
        }
        if(pass<0)
        {
            p(0)
        }
        else if(pass>100)
        {
            p(-1)
        }
        else
        {
            p(pass)
        }
        
    }
    
    return 0;
}
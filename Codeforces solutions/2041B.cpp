#include<iostream>
#define ll long long
#define p(x) cout<<x<<endl;
#define m(x) cout<<x<<" ";
using namespace std;
int main()
{
    ll n;
    cin>>n;
    while(n--)
    {
        ll a,b;
        cin>>a>>b;
        ll x = a+b,sum=0,c=0;
        for(ll i=1;;i++)
        {
            if(sum+i>x)
            {
                break;
            }
            else
            {
                sum+=i;
                c++;
            }
        }
        p(c)
    }
    return 0;
}

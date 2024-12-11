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
        ll n,m,k;
        cin>>n>>m>>k;
        string s;
        cin>>s;
        s+=s;
        ll c=0,ans=0;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                c++;
            }
            else if(s[i]=='1')
            {
                c=0;
            }
            if(c==m)
            {
                for(ll j=i;j<i+k;j++)
                {
                    s[j]='1';
                }
                ans++;
                c=0;
            }
        }
        p(ans)
    }
    return 0;
}

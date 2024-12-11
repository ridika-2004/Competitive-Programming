#include<iostream>
#include<bitset>
#include<string>
#define ll long long
#define p(x) cout<<x<<endl;
#define m(x) cout<<x<<" ";
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,m;
        cin>>x>>m;
        string s = bitset<32>(x).to_string();
        ll a = s.find('1');
        ll size = 32-a;
        ll c=0;
        ll res1 = (1<<size)-1;
        ll res = min(m,res1);
        for(ll i=1;i<=res;i++)
        {
            if(i==x){continue;}
            else
            {
                ll z = x^i;
                if(x%z==0 || i%z==0)
                {
                    c++;
                }
            }
        }
        p(c)
    }
    return 0;
}

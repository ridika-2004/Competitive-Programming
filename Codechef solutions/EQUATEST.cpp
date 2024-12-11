#include<iostream>
#include<cmath>
#include<string>
#define p(x) cout<<x<<endl;
#define m(x) cout<<x<<" ";
#include<iomanip>
#include<set>
#include<stack>
#include<map>
#include<vector>
#include<algorithm>
#include<numeric>
#include<bitset>
#include<utility>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pll pair<long long, long long>
#define pb push_back
#define mp make_pair
#define mod 1000000007
using namespace std;


int main ()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        string s1,s2;
        cin>>s1;
        cin>>s2;
        ll x = count(s1.begin(), s1.end(), 'a');
        ll y = count(s2.begin(), s2.end(), 'a');
        ll z1=0,z2=0;
        for(char c: s1)
        {
            if(c=='b')
            {
                z1++;
            }
            else
            {
                break;
            }
        }

        for(char c: s2)
        {
            if(c=='b')
            {
                z2++;
            }
            else
            {
                break;
            }
        }
        if(x==y && z1==z2)
        {
            p("Yes")
        }
        else
        {
            p("No")
        }

    }
    return 0;
}



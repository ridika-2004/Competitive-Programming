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
    multiset<ll> ms;
    vector<pair<string, ll>> v;
    while(t--)
    {
        string s;
        ll n;
        cin>>s;
        if(s[0]=='i')
        {
            cin>>n;
            ms.insert(n);
            v.push_back(make_pair(s,n));
        }
        else if(s[0]=='g')
        {
            cin>>n;
            while(!ms.empty() && *ms.begin()<n)
            {
                ms.erase(ms.begin());
                v.push_back(make_pair("removeMin", 0));
            }
            if(ms.empty() || *ms.begin()>n)
            {
                ms.insert(n);
                v.push_back(make_pair("insert", n));
            }
            v.push_back(make_pair(s,n));
        }
        else
        {
            if(!ms.empty())
            {
                ms.erase(ms.begin());
            }
            else
            {
                v.push_back(make_pair("insert",1));
            }
            v.push_back(make_pair(s, 0));
        }
    }

    p(v.size())
    for(ll i=0;i<v.size();i++)
    {
        if(v[i].first=="removeMin")
        {
            p(v[i].first)
        }
        else
        {
            p(v[i].first<<" "<<v[i].second)
        }
    }
    return 0;
}

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
    ll a,b,c;
    cin>>a>>b>>c;
    ll x = 2*(a+b);
    ll y = 2*c;
    if(x>y)
    {
        p(y+b)
    }
    else
    {
        p(x+b)
    }
    return 0;
}


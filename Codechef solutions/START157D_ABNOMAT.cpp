#include<iostream>
#include<string>
#define p(x) cout<<x<<endl;
#define m(x) cout<<x;
#include<iomanip>
#include<vector>
#include<stack>
#include<math.h>
#include<set>
#include<iomanip>
#include<algorithm>
#include<numeric>
#define ll long long
using namespace std;


int main ()
{
    ll t;
    cin>>t;
    while(t--)
    {
    ll n,k;
    cin>>n>>k;
    string s1,s2;
    cin>>s1>>s2;
    string s = s1+s2;
    set<char> sc;
    for(char c : s)
    {
        sc.insert(c);
    }
    if(sc.size()<26)
    {
        p("YES")
    }
    else
    {
        p("NO")
    }
    }
    return 0;
}


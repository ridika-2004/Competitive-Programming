
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
        ll a,b,c;
        cin>>a>>b>>c;

        if(b-a == c-b)
        {
            p("0")
        }
        else
        {
            p("1")
        }
    }
    return 0;
}

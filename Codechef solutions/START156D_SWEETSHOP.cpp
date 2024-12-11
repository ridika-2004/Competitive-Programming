
#include<iostream>
#include<string>
#include<iomanip>
#include<vector>
#include<stack>
#include<math.h>
#include<set>
#include<iomanip>
#include<algorithm>
#include<numeric>

#define p(x) cout<<x<<endl;
#define m(x) cout<<x;
#define ll long long
using namespace std;


int main ()
{
    ll x,n;
    cin>>x>>n;

    x = x-(n*10);
    if(x<=0)
    {
        p("0")
    }
    else
    {
        p(x/20)
    }
    return 0;
}


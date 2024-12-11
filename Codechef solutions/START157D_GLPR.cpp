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
    ll n,k;
    cin>>n>>k;

    if(k<=(2*n))
    {
        p("METAL")
    }
    else
    {
        p("PLASTIC")
    }
    return 0;
}

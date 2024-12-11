
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
    ll t;
    cin>>t;
    while(t--)//to produce t number of test cases
    {
        ll n;
        cin>>n;
        if(n&1)
        {
            n = n-1;
        }
        ll n2 = n/2;
        ll n3=0, maxx=0;
        while(n2>=0)
        {
            if(maxx<(n3*n2))
            {
                maxx = n2*n3;
            }
            n2--;
            n3++;
        }
        p(maxx)

    }
    return 0;
}

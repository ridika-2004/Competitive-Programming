#include<iostream>
#include<string>
#include<iomanip>
#include<vector>
#include<stack>
#include<queue>
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
    cin>>t;//number of test cases
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll a;
        queue <ll> q;
        while(n--)
        {
            cin>>a;
            q.push(a);//pushed values inside queue
        }
        while(k--)//popped k values from queue from front and pushed them in the back
        {
            ll i = q.front();
            q.pop();
            q.push(i);
        }

        while(!q.empty())
        {
            m(q.front()<<" ")//printed the values
            q.pop();
        }
        cout<<endl;
    }
    return 0;
}


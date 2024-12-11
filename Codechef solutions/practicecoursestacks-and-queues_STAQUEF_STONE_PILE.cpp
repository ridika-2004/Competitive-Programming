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
        ll n;
        cin>>n;
        queue<ll> q;
        ll arr[n];
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
            q.push(arr[i]);
        }
        /*for(ll i=n-1;i>=0;i--)
        {
            q.push(arr[i]);
        }*/
        ll i=0;
        while(q.size()>1)
        {
            if(!(i&1))
            {
                ll x = q.front();
                q.push(x);
                q.pop();
                q.pop();
            }
            else
            {
                ll x = q.front();
                q.push(x);
                q.pop();
                ll y = q.front();
                q.push(y);
                q.pop();
                q.pop();
            }
            i++;
        }
        ll w=0;
        if((i&1))
        {
            w=1;
        }
        p(w<<" "<<q.front())


    }
    return 0;
}



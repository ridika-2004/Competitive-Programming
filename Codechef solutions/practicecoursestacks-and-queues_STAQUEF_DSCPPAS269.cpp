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
    ll n;
    cin>>n;//number of test cases

    stack<ll> s1;
    stack<ll> s2;
    stack<ll> s3;
    while(n--)
    {
        ll a;
        cin>>a;
        s1.push(a);
    }
    s2.push(0);

    while(!s1.empty())
    {
        if(s1.top()>=s2.top())
        {
            while(!(s2.empty()) && (s1.top()>=s2.top()))
            {
                s2.pop();
            }

            if(s2.empty())
            {
                s2.push(s1.top());
                s1.pop();
                s3.push(-1);
            }
            else
            {
                s3.push(s2.top());
                s2.push(s1.top());
                s1.pop();
            }
        }
        else
        {
            s3.push(s2.top());
            s2.push(s1.top());
            s1.pop();
        }

    }

    while(!s3.empty())
    {
        m(s3.top()<<" ")
        s3.pop();
    }
    return 0;
}

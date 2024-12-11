#include<iostream>
#include<vector>
#define ll long long
#define p(x) cout<<x<<endl;

using namespace std;
int main()
{
    ll x,y,z;
    cin>>x>>y>>z;
    ll res = x-(y*z);
    if(res<0)
    {
        p(-1)
    }
    else
    {
        p(res)
    }
    return 0;
}
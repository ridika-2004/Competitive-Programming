#include<iostream>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

ll binaryExponen(ll a,ll b)
{
    if(b==0){
        return 1;
    }
    ll res = binaryExponen(a, b/2);
    if(b&1){
        return a*res*res;
    }
    else{
        return res*res;
    }
}

ll binaryExponenIter(ll a,ll b)
{
    ll ans =1;
    while(b)
    {
        if(b&1)
        {
            ans*=a;
        }
        a*=a;
        b >>=1;
    }
    return ans;
}
int main()
{
    p(binaryExponenIter(2,13))


    return 0;
}

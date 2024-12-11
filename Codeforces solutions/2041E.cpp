#include<iostream>
#include<vector>
#define ll long long
#define p(x) cout<<x<<endl;
#define m(x) cout<<x<<" ";
using namespace std;
int main()
{
    ll a,b;
        cin>>a>>b;
        if(a==b)
        {
            p(1)
            p(a)
        }
        else
        {
            vector<ll> v(3,0);
            v[1] = b;
            v[0] = b;
            v[2] = (3*a)-b-b;
            p(3)
            p(v[0]<<" "<<v[1]<<" "<<v[2])
        }

    return 0;
}


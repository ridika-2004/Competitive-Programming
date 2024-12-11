#include <bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;

using namespace std;
int main()
{
    // auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll x=0,y=0;
        for(ll i=0;i<n;i++){
            char c;
            cin>>c;
            if(c=='A')
            {
                if(y)
                {
                    x++;
                    y--;
                }
                else
                {
                    x++;
                }
            }
            else
            {
                if(x)
                {
                    y++;
                    x--;
                }
                else
                {
                    y++;
                }
            }
        }
        p(x+y)
    }
    // auto end = chrono::high_resolution_clock::now();
    // auto elapsed = chrono::duration_cast<chrono::nanoseconds>(end - begin);
    // cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
    return 0;
}
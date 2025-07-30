#include <bits/stdc++.h>
#define ll long long
#define p(x) cout << x <<endl;
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        deque<ll> q;
        ll minn=INT_MAX, maxx=INT_MIN, mini=0,maxi=0;
        for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            q.push_back(x);

            if(minn>x){
                minn = x;
                mini = i;
            }

            if(maxx<x){
                maxx = x;
                maxi = i;
            }
        }

        // 2 1 3 4 5 6 8 7
        // mini = 1
        // maxi = 6

        // resleft = 7
        // resright = 7
        // resmiddle = 8-1+

        ll resleft = max(mini+1, maxi+1);
        ll resright = max(n-mini, n-maxi);
        ll maxj = max(maxi, mini);
        ll minj = min(maxi,mini);  
        ll resmiddle = n-maxj+minj+1;

        p(min(resleft, min(resmiddle, resright)))
    }
    return 0;
}

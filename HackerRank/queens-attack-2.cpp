#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define p(x) cout<<x<<"\n";

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        ll n,k;
        cin>>n>>k;
        ll rq,cq;
        cin>>rq>>cq;
        set<pair<ll,ll>> v;
        for(ll i=0;i<k;i++){
            ll a,b;
            cin>>a>>b;
            v.insert({a,b});
        }

        ll r=rq-1,c=cq;
        ll ans=0;
        while(r>=1){ // up
            if(v.count({r, c})){
                break;
            } else{
                ans++;
            }
            r--;
        }
        r=rq+1,c=cq;
        while(r<=n){ // down
            if(v.count({r, c})){
                break;
            } else{
                ans++;
            }
            r++;
        }
        r=rq,c=cq-1;
        while(c>=1){ // left
            if(v.count({r, c})){
                break;
            } else{
                ans++;
            }
            c--;
        }
        r=rq,c=cq+1;
        while(c<=n){ // right
            if(v.count({r, c})){
                break;
            } else{
                ans++;
            }
            c++;
        }
        r=rq-1,c=cq-1;
        while(r>=1 && c>=1){ //up-left
            if(v.count({r, c})){
                break;
            } else{
                ans++;
            }
            r--;c--;
        }
        r=rq+1,c=cq+1;
        while(r<=n && c<=n){ // down-right
            if(v.count({r, c})){
                break;
            } else{
                ans++;
            }
            r++;c++;
        }
        r=rq-1,c=cq+1;
        while(r>=1 && c<=n){ // up-right
            if(v.count({r, c})){
                break;
            } else{
                ans++;
            }
            r--;c++;
        }
        r=rq+1,c=cq-1;
        while(r<=n && c>=1){ // down-left
            if(v.count({r, c})){
                break;
            } else{
                ans++;
            }
            r++;c--;
        }

        p(ans)

    return 0;
}

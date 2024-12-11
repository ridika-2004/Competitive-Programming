#include <bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--){
        ll n,sum=0;
        cin>>n;
        vector<ll> a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%n!=0){
            p("NO")
        }
        else{
            ll r = sum/n;
            for(ll i=1;i<n-1;){
                if(a[i-1]==r && a[i+1]==r){
                    i++;
                }
                else{
                    if(a[i-1]==r){
                        i++;
                    }
                    else{
                        if(a[i-1]<r){
                            ll add = r-a[i-1];
                            a[i-1]=r;
                            a[i+1]-=add;
                            i++;
                        }
                        else{
                            ll add = a[i-1]-r;
                            a[i-1] =r;
                            a[i+1]+=add;
                            i++;
                        }
                    }
                }
            }
            if(a[n-1]==r){
                p("YES")
            }
            else{
                p("NO")
            }
        }
    }
    return 0;
}
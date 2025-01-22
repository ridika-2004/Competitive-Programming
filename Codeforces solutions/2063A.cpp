#include<bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;
int main(){
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,m;
        cin>>n>>m;
        if(n==1 && m==1){
            p(1)
        } else {
            p(m-n)
        }
    }
    
    return 0;
}
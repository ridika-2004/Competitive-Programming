#include<bits/stdc++.h>
#define ll long long
#define p(x) cout<<x<<endl;
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n; //0
        ll num = 15;
        ll res = (n/num)+1; //1
        ll a = n-((res-1)*num)+1; //1
        if(a>3){
            a = 3;
        } //1
        p(((res-1)*3)+a)
    }
    return 0;
}